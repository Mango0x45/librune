/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"
#include "internal/common.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x03FF040800000000),
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
	{RUNE_C(0x0023CF), RUNE_C(0x0023CF)},
	{RUNE_C(0x0023E9), RUNE_C(0x0023F3)},
	{RUNE_C(0x0023F8), RUNE_C(0x0023FA)},
	{RUNE_C(0x0024C2), RUNE_C(0x0024C2)},
	{RUNE_C(0x0025AA), RUNE_C(0x0025AB)},
	{RUNE_C(0x0025B6), RUNE_C(0x0025B6)},
	{RUNE_C(0x0025C0), RUNE_C(0x0025C0)},
	{RUNE_C(0x0025FB), RUNE_C(0x0025FE)},
	{RUNE_C(0x002600), RUNE_C(0x002604)},
	{RUNE_C(0x00260E), RUNE_C(0x00260E)},
	{RUNE_C(0x002611), RUNE_C(0x002611)},
	{RUNE_C(0x002614), RUNE_C(0x002615)},
	{RUNE_C(0x002618), RUNE_C(0x002618)},
	{RUNE_C(0x00261D), RUNE_C(0x00261D)},
	{RUNE_C(0x002620), RUNE_C(0x002620)},
	{RUNE_C(0x002622), RUNE_C(0x002623)},
	{RUNE_C(0x002626), RUNE_C(0x002626)},
	{RUNE_C(0x00262A), RUNE_C(0x00262A)},
	{RUNE_C(0x00262E), RUNE_C(0x00262F)},
	{RUNE_C(0x002638), RUNE_C(0x00263A)},
	{RUNE_C(0x002640), RUNE_C(0x002640)},
	{RUNE_C(0x002642), RUNE_C(0x002642)},
	{RUNE_C(0x002648), RUNE_C(0x002653)},
	{RUNE_C(0x00265F), RUNE_C(0x002660)},
	{RUNE_C(0x002663), RUNE_C(0x002663)},
	{RUNE_C(0x002665), RUNE_C(0x002666)},
	{RUNE_C(0x002668), RUNE_C(0x002668)},
	{RUNE_C(0x00267B), RUNE_C(0x00267B)},
	{RUNE_C(0x00267E), RUNE_C(0x00267F)},
	{RUNE_C(0x002692), RUNE_C(0x002697)},
	{RUNE_C(0x002699), RUNE_C(0x002699)},
	{RUNE_C(0x00269B), RUNE_C(0x00269C)},
	{RUNE_C(0x0026A0), RUNE_C(0x0026A1)},
	{RUNE_C(0x0026A7), RUNE_C(0x0026A7)},
	{RUNE_C(0x0026AA), RUNE_C(0x0026AB)},
	{RUNE_C(0x0026B0), RUNE_C(0x0026B1)},
	{RUNE_C(0x0026BD), RUNE_C(0x0026BE)},
	{RUNE_C(0x0026C4), RUNE_C(0x0026C5)},
	{RUNE_C(0x0026C8), RUNE_C(0x0026C8)},
	{RUNE_C(0x0026CE), RUNE_C(0x0026CF)},
	{RUNE_C(0x0026D1), RUNE_C(0x0026D1)},
	{RUNE_C(0x0026D3), RUNE_C(0x0026D4)},
	{RUNE_C(0x0026E9), RUNE_C(0x0026EA)},
	{RUNE_C(0x0026F0), RUNE_C(0x0026F5)},
	{RUNE_C(0x0026F7), RUNE_C(0x0026FA)},
	{RUNE_C(0x0026FD), RUNE_C(0x0026FD)},
	{RUNE_C(0x002702), RUNE_C(0x002702)},
	{RUNE_C(0x002705), RUNE_C(0x002705)},
	{RUNE_C(0x002708), RUNE_C(0x00270D)},
	{RUNE_C(0x00270F), RUNE_C(0x00270F)},
	{RUNE_C(0x002712), RUNE_C(0x002712)},
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
	{RUNE_C(0x002763), RUNE_C(0x002764)},
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
	{RUNE_C(0x01F004), RUNE_C(0x01F004)},
	{RUNE_C(0x01F0CF), RUNE_C(0x01F0CF)},
	{RUNE_C(0x01F170), RUNE_C(0x01F171)},
	{RUNE_C(0x01F17E), RUNE_C(0x01F17F)},
	{RUNE_C(0x01F18E), RUNE_C(0x01F18E)},
	{RUNE_C(0x01F191), RUNE_C(0x01F19A)},
	{RUNE_C(0x01F1E6), RUNE_C(0x01F1FF)},
	{RUNE_C(0x01F201), RUNE_C(0x01F202)},
	{RUNE_C(0x01F21A), RUNE_C(0x01F21A)},
	{RUNE_C(0x01F22F), RUNE_C(0x01F22F)},
	{RUNE_C(0x01F232), RUNE_C(0x01F23A)},
	{RUNE_C(0x01F250), RUNE_C(0x01F251)},
	{RUNE_C(0x01F300), RUNE_C(0x01F321)},
	{RUNE_C(0x01F324), RUNE_C(0x01F393)},
	{RUNE_C(0x01F396), RUNE_C(0x01F397)},
	{RUNE_C(0x01F399), RUNE_C(0x01F39B)},
	{RUNE_C(0x01F39E), RUNE_C(0x01F3F0)},
	{RUNE_C(0x01F3F3), RUNE_C(0x01F3F5)},
	{RUNE_C(0x01F3F7), RUNE_C(0x01F4FD)},
	{RUNE_C(0x01F4FF), RUNE_C(0x01F53D)},
	{RUNE_C(0x01F549), RUNE_C(0x01F54E)},
	{RUNE_C(0x01F550), RUNE_C(0x01F567)},
	{RUNE_C(0x01F56F), RUNE_C(0x01F570)},
	{RUNE_C(0x01F573), RUNE_C(0x01F57A)},
	{RUNE_C(0x01F587), RUNE_C(0x01F587)},
	{RUNE_C(0x01F58A), RUNE_C(0x01F58D)},
	{RUNE_C(0x01F590), RUNE_C(0x01F590)},
	{RUNE_C(0x01F595), RUNE_C(0x01F596)},
	{RUNE_C(0x01F5A4), RUNE_C(0x01F5A5)},
	{RUNE_C(0x01F5A8), RUNE_C(0x01F5A8)},
	{RUNE_C(0x01F5B1), RUNE_C(0x01F5B2)},
	{RUNE_C(0x01F5BC), RUNE_C(0x01F5BC)},
	{RUNE_C(0x01F5C2), RUNE_C(0x01F5C4)},
	{RUNE_C(0x01F5D1), RUNE_C(0x01F5D3)},
	{RUNE_C(0x01F5DC), RUNE_C(0x01F5DE)},
	{RUNE_C(0x01F5E1), RUNE_C(0x01F5E1)},
	{RUNE_C(0x01F5E3), RUNE_C(0x01F5E3)},
	{RUNE_C(0x01F5E8), RUNE_C(0x01F5E8)},
	{RUNE_C(0x01F5EF), RUNE_C(0x01F5EF)},
	{RUNE_C(0x01F5F3), RUNE_C(0x01F5F3)},
	{RUNE_C(0x01F5FA), RUNE_C(0x01F64F)},
	{RUNE_C(0x01F680), RUNE_C(0x01F6C5)},
	{RUNE_C(0x01F6CB), RUNE_C(0x01F6D2)},
	{RUNE_C(0x01F6D5), RUNE_C(0x01F6D7)},
	{RUNE_C(0x01F6DC), RUNE_C(0x01F6E5)},
	{RUNE_C(0x01F6E9), RUNE_C(0x01F6E9)},
	{RUNE_C(0x01F6EB), RUNE_C(0x01F6EC)},
	{RUNE_C(0x01F6F0), RUNE_C(0x01F6F0)},
	{RUNE_C(0x01F6F3), RUNE_C(0x01F6FC)},
	{RUNE_C(0x01F7E0), RUNE_C(0x01F7EB)},
	{RUNE_C(0x01F7F0), RUNE_C(0x01F7F0)},
	{RUNE_C(0x01F90C), RUNE_C(0x01F93A)},
	{RUNE_C(0x01F93C), RUNE_C(0x01F945)},
	{RUNE_C(0x01F947), RUNE_C(0x01F9FF)},
	{RUNE_C(0x01FA70), RUNE_C(0x01FA7C)},
	{RUNE_C(0x01FA80), RUNE_C(0x01FA88)},
	{RUNE_C(0x01FA90), RUNE_C(0x01FABD)},
	{RUNE_C(0x01FABF), RUNE_C(0x01FAC5)},
	{RUNE_C(0x01FACE), RUNE_C(0x01FADB)},
	{RUNE_C(0x01FAE0), RUNE_C(0x01FAE8)},
	{RUNE_C(0x01FAF0), RUNE_C(0x01FAF8)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_emoji(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
