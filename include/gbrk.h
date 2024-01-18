#ifndef RUNE_GBRK_H
#define RUNE_GBRK_H

#include "internal/types.h" /* IWYU pragma: export */

struct grapheme {
	const char8_t *p;
	size_t len;
};

size_t u8glen(const char8_t *, size_t);
const char8_t *u8gnext(struct grapheme *, const char8_t **, size_t *);

#endif /* !RUNE_GBRK_H */
