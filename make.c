#define _GNU_SOURCE
#include <ctype.h>
#include <errno.h>
#include <glob.h>
#include <libgen.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define CBS_PTHREAD
#include "cbs.h"

#define CC         "cc"
#define WARNINGS   "-Wall", "-Wextra", "-Wpedantic", "-Werror", "-Wno-attributes"
#define CFLAGS_ALL WARNINGS, "-pipe", "-std=c2x"
#define CFLAGS_DBG CFLAGS_ALL, "-g", "-ggdb3", "-Og"
#ifdef __APPLE__
#	define CFLAGS_RLS CFLAGS_ALL, "-O3", "-flto"
#else
#	define CFLAGS_RLS \
		CFLAGS_ALL, "-O3", "-flto", "-march=native", "-mtune=native"
#endif

#define _CMDPRC(C, F) \
	do { \
		int ec; \
		F(C); \
		if ((ec = cmdexec(C)) != EXIT_SUCCESS) \
			diex("%s terminated with exit-code %d", *(C)._argv, ec); \
		cmdclr(&(C)); \
	} while (0)
#define CMDPRC(C)  _CMDPRC(C, cmdput)
#define CMDPRC2(C) _CMDPRC(C, cmdput2)

#define streq(a, b) (!strcmp(a, b))

#define flagset(o) (flags & (1 << ((o) - 'a')))

static void work(void *);
static int globerr(const char *, int);
static void cmdput2(cmd_t);

static uint32_t flags;

int
main(int argc, char **argv)
{
	int opt, procs = -1;

	cbsinit(argc, argv);
	rebuild();

	while ((opt = getopt(argc, argv, "fj:r")) != -1) {
		switch (opt) {
		case '?':
			fprintf(stderr, "Usage: %s [-j procs] [-fr]\n", *argv);
			exit(EXIT_FAILURE);
		case 'j':
			procs = atoi(optarg);
			break;
		default:
			flags |= 1 << (opt - 'a');
		}
	}

	argc -= optind;
	argv += optind;

	if (argc >= 1) {
		if (streq(*argv, "clean")) {
			cmd_t c = {0};
			cmdadd(&c, "find", ".", "(", "-name", "*.[ao]", "-or", "-name",
			       "*.so", ")", "-delete");
			CMDPRC(c);
		} else {
			diex("invalid subcommand -- '%s'", *argv);
			exit(EXIT_FAILURE);
		}
	} else {
		cmd_t c = {0};
		glob_t g;
		tpool_t tp;

		if (glob("lib/*/*.c", 0, globerr, &g))
			die("glob");

		if (procs == -1 && (procs = nproc()) == -1) {
			if (errno)
				die("nproc");
			procs = 8;
		}

		tpinit(&tp, procs);
		for (size_t i = 0; i < g.gl_pathc; i++)
			tpenq(&tp, work, g.gl_pathv[i], NULL);
		tpwait(&tp);
		tpfree(&tp);

		for (size_t i = 0; i < g.gl_pathc; i++)
			g.gl_pathv[i][strlen(g.gl_pathv[i]) - 1] = 'o';

		if (flagset('f')
		    || foutdatedv("librune.a", (const char **)g.gl_pathv, g.gl_pathc))
		{
			c.dst = "librune.a";
			cmdadd(&c, "ar", "rcs", "librune.a");
			cmdaddv(&c, g.gl_pathv, g.gl_pathc);
			CMDPRC2(c);
		}

		if (flagset('f')
		    || foutdatedv("librune.so", (const char **)g.gl_pathv, g.gl_pathc))
		{
			struct strv sv = {};
			c.dst = "librune.so";
			env_or_default(&sv, "CC", CC);
			cmdaddv(&c, sv.buf, sv.len);
			cmdadd(&c, "-shared", "-o", "librune.so");
			cmdaddv(&c, g.gl_pathv, g.gl_pathc);
			CMDPRC2(c);
		}

		globfree(&g);
	}

	return EXIT_SUCCESS;
}

void
work(void *p)
{
	cmd_t c = {0};
	char *src = p;
	struct strv sv = {0};

	if (!(c.dst = strdup(src)))
		die("strdup");
	c.dst[strlen(c.dst) - 1] = 'o';

	if (flagset('f') || foutdated(c.dst, src)) {
		env_or_default(&sv, "CC", CC);
		if (flagset('r'))
			env_or_default(&sv, "CFLAGS", CFLAGS_RLS);
		else
			env_or_default(&sv, "CFLAGS", CFLAGS_DBG);
		cmdaddv(&c, sv.buf, sv.len);
		cmdadd(&c, "-Iinclude", "-fPIC", "-o", c.dst, "-c", src);
		CMDPRC2(c);
	}

	free(c.dst);
}

int
globerr(const char *s, int e)
{
	errno = e;
	die("glob: %s", s);
}

void
cmdput2(cmd_t c)
{
	const char *p;

	flockfile(stderr);
	for (p = *c._argv; *p; p++)
		fputc(toupper(*p), stderr);
	fprintf(stderr, "\t%s\n", c.dst);
	funlockfile(stderr);
}
