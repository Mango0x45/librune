/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask =
	0x0000000000000000080008000000000000000000000000000000008400000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000022, 0x000022},
	{0x000027, 0x000027},
	{0x0000AB, 0x0000AB},
	{0x0000BB, 0x0000BB},
	{0x002018, 0x00201F},
	{0x002039, 0x00203A},
	{0x002E42, 0x002E42},
	{0x00300C, 0x00300F},
	{0x00301D, 0x00301F},
	{0x00FE41, 0x00FE44},
	{0x00FF02, 0x00FF02},
	{0x00FF07, 0x00FF07},
	{0x00FF62, 0x00FF63},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_quotation_mark(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
