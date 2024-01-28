/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = 0x0uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x00FDD0, 0x00FDEF},
	{0x00FFFE, 0x00FFFF},
	{0x01FFFE, 0x01FFFF},
	{0x02FFFE, 0x02FFFF},
	{0x03FFFE, 0x03FFFF},
	{0x04FFFE, 0x04FFFF},
	{0x05FFFE, 0x05FFFF},
	{0x06FFFE, 0x06FFFF},
	{0x07FFFE, 0x07FFFF},
	{0x08FFFE, 0x08FFFF},
	{0x09FFFE, 0x09FFFF},
	{0x0AFFFE, 0x0AFFFF},
	{0x0BFFFE, 0x0BFFFF},
	{0x0CFFFE, 0x0CFFFF},
	{0x0DFFFE, 0x0DFFFF},
	{0x0EFFFE, 0x0EFFFF},
	{0x0FFFFE, 0x0FFFFF},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_noncharacter_code_point(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & ch) :
#endif
		lookup(ch);
}
