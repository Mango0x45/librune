/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x7000080000000000),
	UINT64_C(0x5000000040000000),
	UINT64_C(0x0002100000000000),
	UINT64_C(0x0080000000800000),
};

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x0003D0), RUNE_C(0x0003D2)},
	{RUNE_C(0x0003D5), RUNE_C(0x0003D5)},
	{RUNE_C(0x0003F0), RUNE_C(0x0003F1)},
	{RUNE_C(0x0003F4), RUNE_C(0x0003F6)},
	{RUNE_C(0x000606), RUNE_C(0x000608)},
	{RUNE_C(0x002016), RUNE_C(0x002016)},
	{RUNE_C(0x002032), RUNE_C(0x002034)},
	{RUNE_C(0x002040), RUNE_C(0x002040)},
	{RUNE_C(0x002044), RUNE_C(0x002044)},
	{RUNE_C(0x002052), RUNE_C(0x002052)},
	{RUNE_C(0x002061), RUNE_C(0x002064)},
	{RUNE_C(0x00207A), RUNE_C(0x00207E)},
	{RUNE_C(0x00208A), RUNE_C(0x00208E)},
	{RUNE_C(0x0020D0), RUNE_C(0x0020DC)},
	{RUNE_C(0x0020E1), RUNE_C(0x0020E1)},
	{RUNE_C(0x0020E5), RUNE_C(0x0020E6)},
	{RUNE_C(0x0020EB), RUNE_C(0x0020EF)},
	{RUNE_C(0x002102), RUNE_C(0x002102)},
	{RUNE_C(0x002107), RUNE_C(0x002107)},
	{RUNE_C(0x00210A), RUNE_C(0x002113)},
	{RUNE_C(0x002115), RUNE_C(0x002115)},
	{RUNE_C(0x002118), RUNE_C(0x00211D)},
	{RUNE_C(0x002124), RUNE_C(0x002124)},
	{RUNE_C(0x002128), RUNE_C(0x002129)},
	{RUNE_C(0x00212C), RUNE_C(0x00212D)},
	{RUNE_C(0x00212F), RUNE_C(0x002131)},
	{RUNE_C(0x002133), RUNE_C(0x002138)},
	{RUNE_C(0x00213C), RUNE_C(0x002149)},
	{RUNE_C(0x00214B), RUNE_C(0x00214B)},
	{RUNE_C(0x002190), RUNE_C(0x0021A7)},
	{RUNE_C(0x0021A9), RUNE_C(0x0021AE)},
	{RUNE_C(0x0021B0), RUNE_C(0x0021B1)},
	{RUNE_C(0x0021B6), RUNE_C(0x0021B7)},
	{RUNE_C(0x0021BC), RUNE_C(0x0021DB)},
	{RUNE_C(0x0021DD), RUNE_C(0x0021DD)},
	{RUNE_C(0x0021E4), RUNE_C(0x0021E5)},
	{RUNE_C(0x0021F4), RUNE_C(0x0022FF)},
	{RUNE_C(0x002308), RUNE_C(0x00230B)},
	{RUNE_C(0x002320), RUNE_C(0x002321)},
	{RUNE_C(0x00237C), RUNE_C(0x00237C)},
	{RUNE_C(0x00239B), RUNE_C(0x0023B5)},
	{RUNE_C(0x0023B7), RUNE_C(0x0023B7)},
	{RUNE_C(0x0023D0), RUNE_C(0x0023D0)},
	{RUNE_C(0x0023DC), RUNE_C(0x0023E2)},
	{RUNE_C(0x0025A0), RUNE_C(0x0025A1)},
	{RUNE_C(0x0025AE), RUNE_C(0x0025B7)},
	{RUNE_C(0x0025BC), RUNE_C(0x0025C1)},
	{RUNE_C(0x0025C6), RUNE_C(0x0025C7)},
	{RUNE_C(0x0025CA), RUNE_C(0x0025CB)},
	{RUNE_C(0x0025CF), RUNE_C(0x0025D3)},
	{RUNE_C(0x0025E2), RUNE_C(0x0025E2)},
	{RUNE_C(0x0025E4), RUNE_C(0x0025E4)},
	{RUNE_C(0x0025E7), RUNE_C(0x0025EC)},
	{RUNE_C(0x0025F8), RUNE_C(0x0025FF)},
	{RUNE_C(0x002605), RUNE_C(0x002606)},
	{RUNE_C(0x002640), RUNE_C(0x002640)},
	{RUNE_C(0x002642), RUNE_C(0x002642)},
	{RUNE_C(0x002660), RUNE_C(0x002663)},
	{RUNE_C(0x00266D), RUNE_C(0x00266F)},
	{RUNE_C(0x0027C0), RUNE_C(0x0027FF)},
	{RUNE_C(0x002900), RUNE_C(0x002AFF)},
	{RUNE_C(0x002B30), RUNE_C(0x002B44)},
	{RUNE_C(0x002B47), RUNE_C(0x002B4C)},
	{RUNE_C(0x00FB29), RUNE_C(0x00FB29)},
	{RUNE_C(0x00FE61), RUNE_C(0x00FE66)},
	{RUNE_C(0x00FE68), RUNE_C(0x00FE68)},
	{RUNE_C(0x00FF0B), RUNE_C(0x00FF0B)},
	{RUNE_C(0x00FF1C), RUNE_C(0x00FF1E)},
	{RUNE_C(0x00FF3C), RUNE_C(0x00FF3C)},
	{RUNE_C(0x00FF3E), RUNE_C(0x00FF3E)},
	{RUNE_C(0x00FF5C), RUNE_C(0x00FF5C)},
	{RUNE_C(0x00FF5E), RUNE_C(0x00FF5E)},
	{RUNE_C(0x00FFE2), RUNE_C(0x00FFE2)},
	{RUNE_C(0x00FFE9), RUNE_C(0x00FFEC)},
	{RUNE_C(0x01D400), RUNE_C(0x01D454)},
	{RUNE_C(0x01D456), RUNE_C(0x01D49C)},
	{RUNE_C(0x01D49E), RUNE_C(0x01D49F)},
	{RUNE_C(0x01D4A2), RUNE_C(0x01D4A2)},
	{RUNE_C(0x01D4A5), RUNE_C(0x01D4A6)},
	{RUNE_C(0x01D4A9), RUNE_C(0x01D4AC)},
	{RUNE_C(0x01D4AE), RUNE_C(0x01D4B9)},
	{RUNE_C(0x01D4BB), RUNE_C(0x01D4BB)},
	{RUNE_C(0x01D4BD), RUNE_C(0x01D4C3)},
	{RUNE_C(0x01D4C5), RUNE_C(0x01D505)},
	{RUNE_C(0x01D507), RUNE_C(0x01D50A)},
	{RUNE_C(0x01D50D), RUNE_C(0x01D514)},
	{RUNE_C(0x01D516), RUNE_C(0x01D51C)},
	{RUNE_C(0x01D51E), RUNE_C(0x01D539)},
	{RUNE_C(0x01D53B), RUNE_C(0x01D53E)},
	{RUNE_C(0x01D540), RUNE_C(0x01D544)},
	{RUNE_C(0x01D546), RUNE_C(0x01D546)},
	{RUNE_C(0x01D54A), RUNE_C(0x01D550)},
	{RUNE_C(0x01D552), RUNE_C(0x01D6A5)},
	{RUNE_C(0x01D6A8), RUNE_C(0x01D7CB)},
	{RUNE_C(0x01D7CE), RUNE_C(0x01D7FF)},
	{RUNE_C(0x01EE00), RUNE_C(0x01EE03)},
	{RUNE_C(0x01EE05), RUNE_C(0x01EE1F)},
	{RUNE_C(0x01EE21), RUNE_C(0x01EE22)},
	{RUNE_C(0x01EE24), RUNE_C(0x01EE24)},
	{RUNE_C(0x01EE27), RUNE_C(0x01EE27)},
	{RUNE_C(0x01EE29), RUNE_C(0x01EE32)},
	{RUNE_C(0x01EE34), RUNE_C(0x01EE37)},
	{RUNE_C(0x01EE39), RUNE_C(0x01EE39)},
	{RUNE_C(0x01EE3B), RUNE_C(0x01EE3B)},
	{RUNE_C(0x01EE42), RUNE_C(0x01EE42)},
	{RUNE_C(0x01EE47), RUNE_C(0x01EE47)},
	{RUNE_C(0x01EE49), RUNE_C(0x01EE49)},
	{RUNE_C(0x01EE4B), RUNE_C(0x01EE4B)},
	{RUNE_C(0x01EE4D), RUNE_C(0x01EE4F)},
	{RUNE_C(0x01EE51), RUNE_C(0x01EE52)},
	{RUNE_C(0x01EE54), RUNE_C(0x01EE54)},
	{RUNE_C(0x01EE57), RUNE_C(0x01EE57)},
	{RUNE_C(0x01EE59), RUNE_C(0x01EE59)},
	{RUNE_C(0x01EE5B), RUNE_C(0x01EE5B)},
	{RUNE_C(0x01EE5D), RUNE_C(0x01EE5D)},
	{RUNE_C(0x01EE5F), RUNE_C(0x01EE5F)},
	{RUNE_C(0x01EE61), RUNE_C(0x01EE62)},
	{RUNE_C(0x01EE64), RUNE_C(0x01EE64)},
	{RUNE_C(0x01EE67), RUNE_C(0x01EE6A)},
	{RUNE_C(0x01EE6C), RUNE_C(0x01EE72)},
	{RUNE_C(0x01EE74), RUNE_C(0x01EE77)},
	{RUNE_C(0x01EE79), RUNE_C(0x01EE7C)},
	{RUNE_C(0x01EE7E), RUNE_C(0x01EE7E)},
	{RUNE_C(0x01EE80), RUNE_C(0x01EE89)},
	{RUNE_C(0x01EE8B), RUNE_C(0x01EE9B)},
	{RUNE_C(0x01EEA1), RUNE_C(0x01EEA3)},
	{RUNE_C(0x01EEA5), RUNE_C(0x01EEA9)},
	{RUNE_C(0x01EEAB), RUNE_C(0x01EEBB)},
	{RUNE_C(0x01EEF0), RUNE_C(0x01EEF1)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_math(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
