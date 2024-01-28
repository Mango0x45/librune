/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = 0x600000000000000000000000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000069, 0x00006A},
	{0x00012F, 0x00012F},
	{0x000249, 0x000249},
	{0x000268, 0x000268},
	{0x00029D, 0x00029D},
	{0x0002B2, 0x0002B2},
	{0x0003F3, 0x0003F3},
	{0x000456, 0x000456},
	{0x000458, 0x000458},
	{0x001D62, 0x001D62},
	{0x001D96, 0x001D96},
	{0x001DA4, 0x001DA4},
	{0x001DA8, 0x001DA8},
	{0x001E2D, 0x001E2D},
	{0x001ECB, 0x001ECB},
	{0x002071, 0x002071},
	{0x002148, 0x002149},
	{0x002C7C, 0x002C7C},
	{0x01D422, 0x01D423},
	{0x01D456, 0x01D457},
	{0x01D48A, 0x01D48B},
	{0x01D4BE, 0x01D4BF},
	{0x01D4F2, 0x01D4F3},
	{0x01D526, 0x01D527},
	{0x01D55A, 0x01D55B},
	{0x01D58E, 0x01D58F},
	{0x01D5C2, 0x01D5C3},
	{0x01D5F6, 0x01D5F7},
	{0x01D62A, 0x01D62B},
	{0x01D65E, 0x01D65F},
	{0x01D692, 0x01D693},
	{0x01DF1A, 0x01DF1A},
	{0x01E04C, 0x01E04D},
	{0x01E068, 0x01E068},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_soft_dotted(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & ch) :
#endif
		lookup(ch);
}
