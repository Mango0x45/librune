/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/common.h"

/* clang-format off */

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x00261D), RUNE_C(0x00261D)},
	{RUNE_C(0x0026F9), RUNE_C(0x0026F9)},
	{RUNE_C(0x00270A), RUNE_C(0x00270D)},
	{RUNE_C(0x01F385), RUNE_C(0x01F385)},
	{RUNE_C(0x01F3C2), RUNE_C(0x01F3C4)},
	{RUNE_C(0x01F3C7), RUNE_C(0x01F3C7)},
	{RUNE_C(0x01F3CA), RUNE_C(0x01F3CC)},
	{RUNE_C(0x01F442), RUNE_C(0x01F443)},
	{RUNE_C(0x01F446), RUNE_C(0x01F450)},
	{RUNE_C(0x01F466), RUNE_C(0x01F478)},
	{RUNE_C(0x01F47C), RUNE_C(0x01F47C)},
	{RUNE_C(0x01F481), RUNE_C(0x01F483)},
	{RUNE_C(0x01F485), RUNE_C(0x01F487)},
	{RUNE_C(0x01F48F), RUNE_C(0x01F48F)},
	{RUNE_C(0x01F491), RUNE_C(0x01F491)},
	{RUNE_C(0x01F4AA), RUNE_C(0x01F4AA)},
	{RUNE_C(0x01F574), RUNE_C(0x01F575)},
	{RUNE_C(0x01F57A), RUNE_C(0x01F57A)},
	{RUNE_C(0x01F590), RUNE_C(0x01F590)},
	{RUNE_C(0x01F595), RUNE_C(0x01F596)},
	{RUNE_C(0x01F645), RUNE_C(0x01F647)},
	{RUNE_C(0x01F64B), RUNE_C(0x01F64F)},
	{RUNE_C(0x01F6A3), RUNE_C(0x01F6A3)},
	{RUNE_C(0x01F6B4), RUNE_C(0x01F6B6)},
	{RUNE_C(0x01F6C0), RUNE_C(0x01F6C0)},
	{RUNE_C(0x01F6CC), RUNE_C(0x01F6CC)},
	{RUNE_C(0x01F90C), RUNE_C(0x01F90C)},
	{RUNE_C(0x01F90F), RUNE_C(0x01F90F)},
	{RUNE_C(0x01F918), RUNE_C(0x01F91F)},
	{RUNE_C(0x01F926), RUNE_C(0x01F926)},
	{RUNE_C(0x01F930), RUNE_C(0x01F939)},
	{RUNE_C(0x01F93C), RUNE_C(0x01F93E)},
	{RUNE_C(0x01F977), RUNE_C(0x01F977)},
	{RUNE_C(0x01F9B5), RUNE_C(0x01F9B6)},
	{RUNE_C(0x01F9B8), RUNE_C(0x01F9B9)},
	{RUNE_C(0x01F9BB), RUNE_C(0x01F9BB)},
	{RUNE_C(0x01F9CD), RUNE_C(0x01F9CF)},
	{RUNE_C(0x01F9D1), RUNE_C(0x01F9DD)},
	{RUNE_C(0x01FAC3), RUNE_C(0x01FAC5)},
	{RUNE_C(0x01FAF0), RUNE_C(0x01FAF8)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_ebase(rune ch)
{
	return lookup(ch);
}