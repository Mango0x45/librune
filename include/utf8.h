#ifndef RUNE_UTF8_H
#define RUNE_UTF8_H

#if __STDC_VERSION__ < 202311L
#	include <stdbool.h>
#endif

#include "internal/types.h"

#define U8_LEN_MAX (4)

int rtou8(char8_t *, rune, size_t);
int u8tor(rune *, const char8_t *);
int u8tor_uc(rune *, const char8_t *);

const char8_t *u8chk(const char8_t *, size_t);
bool u8chkr(rune);

int u8wdth(rune);

size_t u8len(const char8_t *, size_t);

const char8_t *u8next(rune *, const char8_t *, size_t *);
const char8_t *u8prev(rune *, const char8_t *, const char8_t *);

const char8_t *u8chr(const char8_t *, rune, size_t);
const char8_t *u8rchr(const char8_t *, rune, size_t);

const char8_t *u8set(const char8_t *, rune, size_t);

#endif /* !RUNE_UTF8_H */
