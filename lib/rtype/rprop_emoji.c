/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask =
	0x00000000000000000000420000000000000000000000000003FF040800000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000023, 0x000023},
	{0x00002A, 0x00002A},
	{0x000030, 0x000039},
	{0x0000A9, 0x0000A9},
	{0x0000AE, 0x0000AE},
	{0x00203C, 0x00203C},
	{0x002049, 0x002049},
	{0x002122, 0x002122},
	{0x002139, 0x002139},
	{0x002194, 0x002199},
	{0x0021A9, 0x0021AA},
	{0x00231A, 0x00231B},
	{0x002328, 0x002328},
	{0x0023CF, 0x0023CF},
	{0x0023E9, 0x0023F3},
	{0x0023F8, 0x0023FA},
	{0x0024C2, 0x0024C2},
	{0x0025AA, 0x0025AB},
	{0x0025B6, 0x0025B6},
	{0x0025C0, 0x0025C0},
	{0x0025FB, 0x0025FE},
	{0x002600, 0x002604},
	{0x00260E, 0x00260E},
	{0x002611, 0x002611},
	{0x002614, 0x002615},
	{0x002618, 0x002618},
	{0x00261D, 0x00261D},
	{0x002620, 0x002620},
	{0x002622, 0x002623},
	{0x002626, 0x002626},
	{0x00262A, 0x00262A},
	{0x00262E, 0x00262F},
	{0x002638, 0x00263A},
	{0x002640, 0x002640},
	{0x002642, 0x002642},
	{0x002648, 0x002653},
	{0x00265F, 0x002660},
	{0x002663, 0x002663},
	{0x002665, 0x002666},
	{0x002668, 0x002668},
	{0x00267B, 0x00267B},
	{0x00267E, 0x00267F},
	{0x002692, 0x002697},
	{0x002699, 0x002699},
	{0x00269B, 0x00269C},
	{0x0026A0, 0x0026A1},
	{0x0026A7, 0x0026A7},
	{0x0026AA, 0x0026AB},
	{0x0026B0, 0x0026B1},
	{0x0026BD, 0x0026BE},
	{0x0026C4, 0x0026C5},
	{0x0026C8, 0x0026C8},
	{0x0026CE, 0x0026CF},
	{0x0026D1, 0x0026D1},
	{0x0026D3, 0x0026D4},
	{0x0026E9, 0x0026EA},
	{0x0026F0, 0x0026F5},
	{0x0026F7, 0x0026FA},
	{0x0026FD, 0x0026FD},
	{0x002702, 0x002702},
	{0x002705, 0x002705},
	{0x002708, 0x00270D},
	{0x00270F, 0x00270F},
	{0x002712, 0x002712},
	{0x002714, 0x002714},
	{0x002716, 0x002716},
	{0x00271D, 0x00271D},
	{0x002721, 0x002721},
	{0x002728, 0x002728},
	{0x002733, 0x002734},
	{0x002744, 0x002744},
	{0x002747, 0x002747},
	{0x00274C, 0x00274C},
	{0x00274E, 0x00274E},
	{0x002753, 0x002755},
	{0x002757, 0x002757},
	{0x002763, 0x002764},
	{0x002795, 0x002797},
	{0x0027A1, 0x0027A1},
	{0x0027B0, 0x0027B0},
	{0x0027BF, 0x0027BF},
	{0x002934, 0x002935},
	{0x002B05, 0x002B07},
	{0x002B1B, 0x002B1C},
	{0x002B50, 0x002B50},
	{0x002B55, 0x002B55},
	{0x003030, 0x003030},
	{0x00303D, 0x00303D},
	{0x003297, 0x003297},
	{0x003299, 0x003299},
	{0x01F004, 0x01F004},
	{0x01F0CF, 0x01F0CF},
	{0x01F170, 0x01F171},
	{0x01F17E, 0x01F17F},
	{0x01F18E, 0x01F18E},
	{0x01F191, 0x01F19A},
	{0x01F1E6, 0x01F1FF},
	{0x01F201, 0x01F202},
	{0x01F21A, 0x01F21A},
	{0x01F22F, 0x01F22F},
	{0x01F232, 0x01F23A},
	{0x01F250, 0x01F251},
	{0x01F300, 0x01F321},
	{0x01F324, 0x01F393},
	{0x01F396, 0x01F397},
	{0x01F399, 0x01F39B},
	{0x01F39E, 0x01F3F0},
	{0x01F3F3, 0x01F3F5},
	{0x01F3F7, 0x01F4FD},
	{0x01F4FF, 0x01F53D},
	{0x01F549, 0x01F54E},
	{0x01F550, 0x01F567},
	{0x01F56F, 0x01F570},
	{0x01F573, 0x01F57A},
	{0x01F587, 0x01F587},
	{0x01F58A, 0x01F58D},
	{0x01F590, 0x01F590},
	{0x01F595, 0x01F596},
	{0x01F5A4, 0x01F5A5},
	{0x01F5A8, 0x01F5A8},
	{0x01F5B1, 0x01F5B2},
	{0x01F5BC, 0x01F5BC},
	{0x01F5C2, 0x01F5C4},
	{0x01F5D1, 0x01F5D3},
	{0x01F5DC, 0x01F5DE},
	{0x01F5E1, 0x01F5E1},
	{0x01F5E3, 0x01F5E3},
	{0x01F5E8, 0x01F5E8},
	{0x01F5EF, 0x01F5EF},
	{0x01F5F3, 0x01F5F3},
	{0x01F5FA, 0x01F64F},
	{0x01F680, 0x01F6C5},
	{0x01F6CB, 0x01F6D2},
	{0x01F6D5, 0x01F6D7},
	{0x01F6DC, 0x01F6E5},
	{0x01F6E9, 0x01F6E9},
	{0x01F6EB, 0x01F6EC},
	{0x01F6F0, 0x01F6F0},
	{0x01F6F3, 0x01F6FC},
	{0x01F7E0, 0x01F7EB},
	{0x01F7F0, 0x01F7F0},
	{0x01F90C, 0x01F93A},
	{0x01F93C, 0x01F945},
	{0x01F947, 0x01F9FF},
	{0x01FA70, 0x01FA7C},
	{0x01FA80, 0x01FA88},
	{0x01FA90, 0x01FABD},
	{0x01FABF, 0x01FAC5},
	{0x01FACE, 0x01FADB},
	{0x01FAE0, 0x01FAE8},
	{0x01FAF0, 0x01FAF8},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_emoji(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
