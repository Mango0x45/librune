/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = 0x0uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x003400, 0x004DBF},
	{0x004E00, 0x009FFF},
	{0x00FA0E, 0x00FA0F},
	{0x00FA11, 0x00FA11},
	{0x00FA13, 0x00FA14},
	{0x00FA1F, 0x00FA1F},
	{0x00FA21, 0x00FA21},
	{0x00FA23, 0x00FA24},
	{0x00FA27, 0x00FA29},
	{0x020000, 0x02A6DF},
	{0x02A700, 0x02B739},
	{0x02B740, 0x02B81D},
	{0x02B820, 0x02CEA1},
	{0x02CEB0, 0x02EBE0},
	{0x02EBF0, 0x02EE5D},
	{0x030000, 0x03134A},
	{0x031350, 0x0323AF},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_unified_ideograph(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & ch) :
#endif
		lookup(ch);
}
