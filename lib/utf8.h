#ifndef RUNE_UTF8_H
#define RUNE_UTF8_H

#include "internal/types.h"

#define UTF8_LEN_MAX (4)

int u8tor(rune *, const char8_t *);
int u8tor_uc(rune *, const char8_t *);
int rtou8(char8_t *, rune);

const char8_t *u8next(rune *, const char8_t *);
const char8_t *u8next_uc(rune *, const char8_t *);
const char8_t *u8prev(rune *, const char8_t *, const char8_t *);
const char8_t *u8prev_uc(rune *, const char8_t *, const char8_t *);

#endif /* !RUNE_UTF8_H */
