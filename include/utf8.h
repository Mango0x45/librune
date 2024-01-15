#ifndef RUNE_UTF8_H
#define RUNE_UTF8_H

#if __STDC_VERSION__ < 202311L
#	include <stdbool.h>
#endif
#include <stddef.h>

#include "internal/types.h"

#define UTF8_LEN_MAX (4)

int u8tor(rune *, const char8_t *);
int u8tor_uc(rune *, const char8_t *);
int rtou8(char8_t *, rune);

bool u8validr(rune);
int u8wdth(rune);

size_t u8len(const char8_t *);

const char8_t *u8next(rune *, const char8_t *);
const char8_t *u8next_uc(rune *, const char8_t *);
const char8_t *u8prev(rune *, const char8_t *, const char8_t *);
const char8_t *u8prev_uc(rune *, const char8_t *, const char8_t *);

const char8_t *u8chr(const char8_t *, rune);
const char8_t *u8rchr(const char8_t *, rune);
const char8_t *u8chrnul(const char8_t *, rune);

#endif /* !RUNE_UTF8_H */
