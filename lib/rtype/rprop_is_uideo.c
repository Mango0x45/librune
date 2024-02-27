/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"

/* clang-format off */

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x003400), RUNE_C(0x004DBF)},
	{RUNE_C(0x004E00), RUNE_C(0x009FFF)},
	{RUNE_C(0x00FA0E), RUNE_C(0x00FA0F)},
	{RUNE_C(0x00FA11), RUNE_C(0x00FA11)},
	{RUNE_C(0x00FA13), RUNE_C(0x00FA14)},
	{RUNE_C(0x00FA1F), RUNE_C(0x00FA1F)},
	{RUNE_C(0x00FA21), RUNE_C(0x00FA21)},
	{RUNE_C(0x00FA23), RUNE_C(0x00FA24)},
	{RUNE_C(0x00FA27), RUNE_C(0x00FA29)},
	{RUNE_C(0x020000), RUNE_C(0x02A6DF)},
	{RUNE_C(0x02A700), RUNE_C(0x02B739)},
	{RUNE_C(0x02B740), RUNE_C(0x02B81D)},
	{RUNE_C(0x02B820), RUNE_C(0x02CEA1)},
	{RUNE_C(0x02CEB0), RUNE_C(0x02EBE0)},
	{RUNE_C(0x02EBF0), RUNE_C(0x02EE5D)},
	{RUNE_C(0x030000), RUNE_C(0x03134A)},
	{RUNE_C(0x031350), RUNE_C(0x0323AF)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_uideo(rune ch)
{
	return lookup(ch);
}
