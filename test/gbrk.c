#define _POSIX_C_SOURCE 200809L
#include <err.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#include <gbrk.h>
#include <utf8.h>

static void test(char *);

int
main(int argc, char **argv)
{
	char *line = NULL;
	size_t n;
	ssize_t nr;
	FILE *fp;

	setlocale(LC_ALL, "");

	if (argc != 2) {
		fprintf(stderr, "%s: file\n", *argv);
		exit(EXIT_FAILURE);
	}

	if (!(fp = fopen(argv[1], "r")))
		err(1, "fopen");

	while ((nr = getline(&line, &n, fp)) > 0) {
		line[nr - 1] = 0;
		test(line);
	}

	if (nr == -1 && ferror(fp))
		err(1, "getline");

	fclose(fp);
	return EXIT_SUCCESS;
}

void
test(char *raw)
{
	int n;
	rune ch;
	char8_t *p;
	static char8_t *buf;

	if (!buf && !(buf = malloc(4096)))
		err(1, "malloc");

	p = buf;
	while (sscanf(raw, "%" SCNxRUNE "%n", &ch, &n)) {
		rune sep;
		p += rtou8(p, ch);
		raw += n;
		raw += u8tor(&sep, (char8_t *)raw);
		if (!sep)
			break;
	}
	*p = 0;

	for (const char8_t *s = buf; p = u8gbrk_next(s), *s; s = p) {
		while (s < p) {
			s += u8tor(&ch, s);
			printf("%04" PRIXRUNE, ch);
			if (s < p)
				fputs("×", stdout);
		}
		if (*p)
			fputs("÷", stdout);
	}
	putchar('\n');
}
