/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"

/* clang-format off */

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x000149), RUNE_C(0x000149)},
	{RUNE_C(0x000673), RUNE_C(0x000673)},
	{RUNE_C(0x000F77), RUNE_C(0x000F77)},
	{RUNE_C(0x000F79), RUNE_C(0x000F79)},
	{RUNE_C(0x0017A3), RUNE_C(0x0017A4)},
	{RUNE_C(0x00206A), RUNE_C(0x00206F)},
	{RUNE_C(0x002329), RUNE_C(0x00232A)},
	{RUNE_C(0x0E0001), RUNE_C(0x0E0001)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_dep(rune ch)
{
	return lookup(ch);
}
