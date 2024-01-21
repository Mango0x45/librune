#ifndef RUNE_BUILDER_H
#define RUNE_BUILDER_H

#define _RUNE_NEEDS_U8VIEW 1
#include "internal/types.h" /* IWYU pragma: export */

struct u8buf {
	char8_t *p;
	size_t len, cap;
};

struct u8buf *u8buf_init(struct u8buf *, size_t);
struct u8buf *u8buf_grow(struct u8buf *, size_t);
struct u8buf *u8buf_fit(struct u8buf *);
void u8buf_free(struct u8buf);

struct u8buf *u8buf_pushr(struct u8buf *, rune);
struct u8buf *u8buf_pushstr(struct u8buf *, const char *);
struct u8buf *u8buf_pushu8(struct u8buf *, struct u8view);

#if __STDC_VERSION__ >= 201112L
#	define u8buf_push(b, x) \
		_Generic((x), \
		    char: u8buf_pushr, \
		    int: u8buf_pushr, \
		    rune: u8buf_pushr, \
		    char *: u8buf_pushstr, \
		    struct u8view: u8buf_pushu8)((b), (x))
#endif

#endif /* !RUNE_BUILDER_H */
