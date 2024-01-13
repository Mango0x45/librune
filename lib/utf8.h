#ifndef RUNE_UTF8_H
#define RUNE_UTF8_H

#include "internal/types.h"

#define RUNE_ERROR   ((rune)0xFFFD)
#define RUNE_MAX     ((rune)0x10FFFF)
#define UTF8_LEN_MAX (4)

int u8tor(rune *, const char8_t *);
int u8tor_uc(rune *, const char8_t *);

int rtou8(char8_t *, rune);

#endif /* !RUNE_UTF8_H */
