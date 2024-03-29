#ifndef RUNE_INTERNAL_COMMON_H
#define RUNE_INTERNAL_COMMON_H

/* IWYU pragma: private */

#include <limits.h>

#define lengthof(a) (sizeof(a) / sizeof(*(a)))

#define U1(x) (((x) & 0x80) == 0x00)
#define U2(x) (((x) & 0xE0) == 0xC0)
#define U3(x) (((x) & 0xF0) == 0xE0)
#define U4(x) (((x) & 0xF8) == 0xF0)
#define UC(x) (((x) & 0xC0) == 0x80)

/* Maximum value of a 1–4-byte long UTF-8 sequence */
#include "rune.h"
static constexpr rune _1B_MAX = RUNE_C(0x00007F);
static constexpr rune _2B_MAX = RUNE_C(0x0007FF);
static constexpr rune _3B_MAX = RUNE_C(0x00FFFF);
static constexpr rune _4B_MAX = RUNE_C(0x10FFFF);

#endif /* !RUNE_INTERNAL_COMMON_H */
