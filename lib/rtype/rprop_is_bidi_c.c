/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/common.h"

/* clang-format off */

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x00061C), RUNE_C(0x00061C)},
	{RUNE_C(0x00200E), RUNE_C(0x00200F)},
	{RUNE_C(0x00202A), RUNE_C(0x00202E)},
	{RUNE_C(0x002066), RUNE_C(0x002069)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_bidi_c(rune ch)
{
	return lookup(ch);
}