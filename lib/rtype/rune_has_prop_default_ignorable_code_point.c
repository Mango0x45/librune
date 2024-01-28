/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = 0x20000000000000000000000000000000000000000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x0000AD, 0x0000AD},
	{0x00034F, 0x00034F},
	{0x00061C, 0x00061C},
	{0x00115F, 0x001160},
	{0x0017B4, 0x0017B5},
	{0x00180B, 0x00180F},
	{0x00200B, 0x00200F},
	{0x00202A, 0x00202E},
	{0x002060, 0x00206F},
	{0x003164, 0x003164},
	{0x00FE00, 0x00FE0F},
	{0x00FEFF, 0x00FEFF},
	{0x00FFA0, 0x00FFA0},
	{0x00FFF0, 0x00FFF8},
	{0x01BCA0, 0x01BCA3},
	{0x01D173, 0x01D17A},
	{0x0E0000, 0x0E0FFF},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_default_ignorable_code_point(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & ch) :
#endif
		lookup(ch);
}
