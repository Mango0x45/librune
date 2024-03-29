/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x0000000000000000),
	UINT64_C(0x07FFFFFE07FFFFFE),
	UINT64_C(0x0020000000000000),
	UINT64_C(0xFF7FFFFFFF7FFFFF),
};

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x000100), RUNE_C(0x000137)},
	{RUNE_C(0x000139), RUNE_C(0x00018C)},
	{RUNE_C(0x00018E), RUNE_C(0x00019A)},
	{RUNE_C(0x00019C), RUNE_C(0x0001A9)},
	{RUNE_C(0x0001AC), RUNE_C(0x0001B9)},
	{RUNE_C(0x0001BC), RUNE_C(0x0001BD)},
	{RUNE_C(0x0001BF), RUNE_C(0x0001BF)},
	{RUNE_C(0x0001C4), RUNE_C(0x000220)},
	{RUNE_C(0x000222), RUNE_C(0x000233)},
	{RUNE_C(0x00023A), RUNE_C(0x000254)},
	{RUNE_C(0x000256), RUNE_C(0x000257)},
	{RUNE_C(0x000259), RUNE_C(0x000259)},
	{RUNE_C(0x00025B), RUNE_C(0x00025C)},
	{RUNE_C(0x000260), RUNE_C(0x000261)},
	{RUNE_C(0x000263), RUNE_C(0x000263)},
	{RUNE_C(0x000265), RUNE_C(0x000266)},
	{RUNE_C(0x000268), RUNE_C(0x00026C)},
	{RUNE_C(0x00026F), RUNE_C(0x00026F)},
	{RUNE_C(0x000271), RUNE_C(0x000272)},
	{RUNE_C(0x000275), RUNE_C(0x000275)},
	{RUNE_C(0x00027D), RUNE_C(0x00027D)},
	{RUNE_C(0x000280), RUNE_C(0x000280)},
	{RUNE_C(0x000282), RUNE_C(0x000283)},
	{RUNE_C(0x000287), RUNE_C(0x00028C)},
	{RUNE_C(0x000292), RUNE_C(0x000292)},
	{RUNE_C(0x00029D), RUNE_C(0x00029E)},
	{RUNE_C(0x000345), RUNE_C(0x000345)},
	{RUNE_C(0x000370), RUNE_C(0x000373)},
	{RUNE_C(0x000376), RUNE_C(0x000377)},
	{RUNE_C(0x00037B), RUNE_C(0x00037D)},
	{RUNE_C(0x00037F), RUNE_C(0x00037F)},
	{RUNE_C(0x000386), RUNE_C(0x000386)},
	{RUNE_C(0x000388), RUNE_C(0x00038A)},
	{RUNE_C(0x00038C), RUNE_C(0x00038C)},
	{RUNE_C(0x00038E), RUNE_C(0x0003A1)},
	{RUNE_C(0x0003A3), RUNE_C(0x0003D1)},
	{RUNE_C(0x0003D5), RUNE_C(0x0003F5)},
	{RUNE_C(0x0003F7), RUNE_C(0x0003FB)},
	{RUNE_C(0x0003FD), RUNE_C(0x000481)},
	{RUNE_C(0x00048A), RUNE_C(0x00052F)},
	{RUNE_C(0x000531), RUNE_C(0x000556)},
	{RUNE_C(0x000561), RUNE_C(0x000587)},
	{RUNE_C(0x0010A0), RUNE_C(0x0010C5)},
	{RUNE_C(0x0010C7), RUNE_C(0x0010C7)},
	{RUNE_C(0x0010CD), RUNE_C(0x0010CD)},
	{RUNE_C(0x0010D0), RUNE_C(0x0010FA)},
	{RUNE_C(0x0010FD), RUNE_C(0x0010FF)},
	{RUNE_C(0x0013A0), RUNE_C(0x0013F5)},
	{RUNE_C(0x0013F8), RUNE_C(0x0013FD)},
	{RUNE_C(0x001C80), RUNE_C(0x001C88)},
	{RUNE_C(0x001C90), RUNE_C(0x001CBA)},
	{RUNE_C(0x001CBD), RUNE_C(0x001CBF)},
	{RUNE_C(0x001D79), RUNE_C(0x001D79)},
	{RUNE_C(0x001D7D), RUNE_C(0x001D7D)},
	{RUNE_C(0x001D8E), RUNE_C(0x001D8E)},
	{RUNE_C(0x001E00), RUNE_C(0x001E9B)},
	{RUNE_C(0x001E9E), RUNE_C(0x001E9E)},
	{RUNE_C(0x001EA0), RUNE_C(0x001F15)},
	{RUNE_C(0x001F18), RUNE_C(0x001F1D)},
	{RUNE_C(0x001F20), RUNE_C(0x001F45)},
	{RUNE_C(0x001F48), RUNE_C(0x001F4D)},
	{RUNE_C(0x001F50), RUNE_C(0x001F57)},
	{RUNE_C(0x001F59), RUNE_C(0x001F59)},
	{RUNE_C(0x001F5B), RUNE_C(0x001F5B)},
	{RUNE_C(0x001F5D), RUNE_C(0x001F5D)},
	{RUNE_C(0x001F5F), RUNE_C(0x001F7D)},
	{RUNE_C(0x001F80), RUNE_C(0x001FB4)},
	{RUNE_C(0x001FB6), RUNE_C(0x001FBC)},
	{RUNE_C(0x001FBE), RUNE_C(0x001FBE)},
	{RUNE_C(0x001FC2), RUNE_C(0x001FC4)},
	{RUNE_C(0x001FC6), RUNE_C(0x001FCC)},
	{RUNE_C(0x001FD0), RUNE_C(0x001FD3)},
	{RUNE_C(0x001FD6), RUNE_C(0x001FDB)},
	{RUNE_C(0x001FE0), RUNE_C(0x001FEC)},
	{RUNE_C(0x001FF2), RUNE_C(0x001FF4)},
	{RUNE_C(0x001FF6), RUNE_C(0x001FFC)},
	{RUNE_C(0x002126), RUNE_C(0x002126)},
	{RUNE_C(0x00212A), RUNE_C(0x00212B)},
	{RUNE_C(0x002132), RUNE_C(0x002132)},
	{RUNE_C(0x00214E), RUNE_C(0x00214E)},
	{RUNE_C(0x002160), RUNE_C(0x00217F)},
	{RUNE_C(0x002183), RUNE_C(0x002184)},
	{RUNE_C(0x0024B6), RUNE_C(0x0024E9)},
	{RUNE_C(0x002C00), RUNE_C(0x002C70)},
	{RUNE_C(0x002C72), RUNE_C(0x002C73)},
	{RUNE_C(0x002C75), RUNE_C(0x002C76)},
	{RUNE_C(0x002C7E), RUNE_C(0x002CE3)},
	{RUNE_C(0x002CEB), RUNE_C(0x002CEE)},
	{RUNE_C(0x002CF2), RUNE_C(0x002CF3)},
	{RUNE_C(0x002D00), RUNE_C(0x002D25)},
	{RUNE_C(0x002D27), RUNE_C(0x002D27)},
	{RUNE_C(0x002D2D), RUNE_C(0x002D2D)},
	{RUNE_C(0x00A640), RUNE_C(0x00A66D)},
	{RUNE_C(0x00A680), RUNE_C(0x00A69B)},
	{RUNE_C(0x00A722), RUNE_C(0x00A72F)},
	{RUNE_C(0x00A732), RUNE_C(0x00A76F)},
	{RUNE_C(0x00A779), RUNE_C(0x00A787)},
	{RUNE_C(0x00A78B), RUNE_C(0x00A78D)},
	{RUNE_C(0x00A790), RUNE_C(0x00A794)},
	{RUNE_C(0x00A796), RUNE_C(0x00A7AE)},
	{RUNE_C(0x00A7B0), RUNE_C(0x00A7CA)},
	{RUNE_C(0x00A7D0), RUNE_C(0x00A7D1)},
	{RUNE_C(0x00A7D6), RUNE_C(0x00A7D9)},
	{RUNE_C(0x00A7F5), RUNE_C(0x00A7F6)},
	{RUNE_C(0x00AB53), RUNE_C(0x00AB53)},
	{RUNE_C(0x00AB70), RUNE_C(0x00ABBF)},
	{RUNE_C(0x00FB00), RUNE_C(0x00FB06)},
	{RUNE_C(0x00FB13), RUNE_C(0x00FB17)},
	{RUNE_C(0x00FF21), RUNE_C(0x00FF3A)},
	{RUNE_C(0x00FF41), RUNE_C(0x00FF5A)},
	{RUNE_C(0x010400), RUNE_C(0x01044F)},
	{RUNE_C(0x0104B0), RUNE_C(0x0104D3)},
	{RUNE_C(0x0104D8), RUNE_C(0x0104FB)},
	{RUNE_C(0x010570), RUNE_C(0x01057A)},
	{RUNE_C(0x01057C), RUNE_C(0x01058A)},
	{RUNE_C(0x01058C), RUNE_C(0x010592)},
	{RUNE_C(0x010594), RUNE_C(0x010595)},
	{RUNE_C(0x010597), RUNE_C(0x0105A1)},
	{RUNE_C(0x0105A3), RUNE_C(0x0105B1)},
	{RUNE_C(0x0105B3), RUNE_C(0x0105B9)},
	{RUNE_C(0x0105BB), RUNE_C(0x0105BC)},
	{RUNE_C(0x010C80), RUNE_C(0x010CB2)},
	{RUNE_C(0x010CC0), RUNE_C(0x010CF2)},
	{RUNE_C(0x0118A0), RUNE_C(0x0118DF)},
	{RUNE_C(0x016E40), RUNE_C(0x016E7F)},
	{RUNE_C(0x01E900), RUNE_C(0x01E943)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_cwcm(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
