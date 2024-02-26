/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"
#include "internal/common.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x0000000000000000),
	UINT64_C(0x0000000000000000),
	UINT64_C(0x0000420000000000),
	UINT64_C(0x0000000000000000),
};

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x00203C), RUNE_C(0x00203C)},
	{RUNE_C(0x002049), RUNE_C(0x002049)},
	{RUNE_C(0x002122), RUNE_C(0x002122)},
	{RUNE_C(0x002139), RUNE_C(0x002139)},
	{RUNE_C(0x002194), RUNE_C(0x002199)},
	{RUNE_C(0x0021A9), RUNE_C(0x0021AA)},
	{RUNE_C(0x00231A), RUNE_C(0x00231B)},
	{RUNE_C(0x002328), RUNE_C(0x002328)},
	{RUNE_C(0x002388), RUNE_C(0x002388)},
	{RUNE_C(0x0023CF), RUNE_C(0x0023CF)},
	{RUNE_C(0x0023E9), RUNE_C(0x0023F3)},
	{RUNE_C(0x0023F8), RUNE_C(0x0023FA)},
	{RUNE_C(0x0024C2), RUNE_C(0x0024C2)},
	{RUNE_C(0x0025AA), RUNE_C(0x0025AB)},
	{RUNE_C(0x0025B6), RUNE_C(0x0025B6)},
	{RUNE_C(0x0025C0), RUNE_C(0x0025C0)},
	{RUNE_C(0x0025FB), RUNE_C(0x0025FE)},
	{RUNE_C(0x002600), RUNE_C(0x002605)},
	{RUNE_C(0x002607), RUNE_C(0x002612)},
	{RUNE_C(0x002614), RUNE_C(0x002685)},
	{RUNE_C(0x002690), RUNE_C(0x002705)},
	{RUNE_C(0x002708), RUNE_C(0x002712)},
	{RUNE_C(0x002714), RUNE_C(0x002714)},
	{RUNE_C(0x002716), RUNE_C(0x002716)},
	{RUNE_C(0x00271D), RUNE_C(0x00271D)},
	{RUNE_C(0x002721), RUNE_C(0x002721)},
	{RUNE_C(0x002728), RUNE_C(0x002728)},
	{RUNE_C(0x002733), RUNE_C(0x002734)},
	{RUNE_C(0x002744), RUNE_C(0x002744)},
	{RUNE_C(0x002747), RUNE_C(0x002747)},
	{RUNE_C(0x00274C), RUNE_C(0x00274C)},
	{RUNE_C(0x00274E), RUNE_C(0x00274E)},
	{RUNE_C(0x002753), RUNE_C(0x002755)},
	{RUNE_C(0x002757), RUNE_C(0x002757)},
	{RUNE_C(0x002763), RUNE_C(0x002767)},
	{RUNE_C(0x002795), RUNE_C(0x002797)},
	{RUNE_C(0x0027A1), RUNE_C(0x0027A1)},
	{RUNE_C(0x0027B0), RUNE_C(0x0027B0)},
	{RUNE_C(0x0027BF), RUNE_C(0x0027BF)},
	{RUNE_C(0x002934), RUNE_C(0x002935)},
	{RUNE_C(0x002B05), RUNE_C(0x002B07)},
	{RUNE_C(0x002B1B), RUNE_C(0x002B1C)},
	{RUNE_C(0x002B50), RUNE_C(0x002B50)},
	{RUNE_C(0x002B55), RUNE_C(0x002B55)},
	{RUNE_C(0x003030), RUNE_C(0x003030)},
	{RUNE_C(0x00303D), RUNE_C(0x00303D)},
	{RUNE_C(0x003297), RUNE_C(0x003297)},
	{RUNE_C(0x003299), RUNE_C(0x003299)},
	{RUNE_C(0x01F000), RUNE_C(0x01F0FF)},
	{RUNE_C(0x01F10D), RUNE_C(0x01F10F)},
	{RUNE_C(0x01F12F), RUNE_C(0x01F12F)},
	{RUNE_C(0x01F16C), RUNE_C(0x01F171)},
	{RUNE_C(0x01F17E), RUNE_C(0x01F17F)},
	{RUNE_C(0x01F18E), RUNE_C(0x01F18E)},
	{RUNE_C(0x01F191), RUNE_C(0x01F19A)},
	{RUNE_C(0x01F1AD), RUNE_C(0x01F1E5)},
	{RUNE_C(0x01F201), RUNE_C(0x01F20F)},
	{RUNE_C(0x01F21A), RUNE_C(0x01F21A)},
	{RUNE_C(0x01F22F), RUNE_C(0x01F22F)},
	{RUNE_C(0x01F232), RUNE_C(0x01F23A)},
	{RUNE_C(0x01F23C), RUNE_C(0x01F23F)},
	{RUNE_C(0x01F249), RUNE_C(0x01F3FA)},
	{RUNE_C(0x01F400), RUNE_C(0x01F53D)},
	{RUNE_C(0x01F546), RUNE_C(0x01F64F)},
	{RUNE_C(0x01F680), RUNE_C(0x01F6FF)},
	{RUNE_C(0x01F774), RUNE_C(0x01F77F)},
	{RUNE_C(0x01F7D5), RUNE_C(0x01F7FF)},
	{RUNE_C(0x01F80C), RUNE_C(0x01F80F)},
	{RUNE_C(0x01F848), RUNE_C(0x01F84F)},
	{RUNE_C(0x01F85A), RUNE_C(0x01F85F)},
	{RUNE_C(0x01F888), RUNE_C(0x01F88F)},
	{RUNE_C(0x01F8AE), RUNE_C(0x01F8FF)},
	{RUNE_C(0x01F90C), RUNE_C(0x01F93A)},
	{RUNE_C(0x01F93C), RUNE_C(0x01F945)},
	{RUNE_C(0x01F947), RUNE_C(0x01FAFF)},
	{RUNE_C(0x01FC00), RUNE_C(0x01FFFD)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_extpic(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
