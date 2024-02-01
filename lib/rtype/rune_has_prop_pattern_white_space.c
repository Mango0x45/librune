/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = \
	0x0000000000000000000000000000002000000000000000000000000100003E00uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000009, 0x00000D},
	{0x000020, 0x000020},
	{0x000085, 0x000085},
	{0x00200E, 0x00200F},
	{0x002028, 0x002029},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_pattern_white_space(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
