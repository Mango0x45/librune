#ifndef RUNE_GBRK_H
#define RUNE_GBRK_H

#include "internal/types.h"

size_t u8glen(const char8_t *, size_t);
const char8_t *u8gnext(const char8_t **, size_t *, const char8_t *, size_t *);

#endif /* !RUNE_GBRK_H */
