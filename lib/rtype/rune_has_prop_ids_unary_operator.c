/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x002FFE, 0x002FFF},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_ids_unary_operator(rune ch)
{
	return lookup(ch);
}
