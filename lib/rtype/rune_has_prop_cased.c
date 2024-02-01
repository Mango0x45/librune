/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = \
	0xFF7FFFFFFF7FFFFF042004000000000007FFFFFE07FFFFFE0000000000000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000041, 0x00005A},
	{0x000061, 0x00007A},
	{0x0000AA, 0x0000AA},
	{0x0000B5, 0x0000B5},
	{0x0000BA, 0x0000BA},
	{0x0000C0, 0x0000D6},
	{0x0000D8, 0x0000F6},
	{0x0000F8, 0x0001BA},
	{0x0001BC, 0x0001BF},
	{0x0001C4, 0x000293},
	{0x000295, 0x0002B8},
	{0x0002C0, 0x0002C1},
	{0x0002E0, 0x0002E4},
	{0x000345, 0x000345},
	{0x000370, 0x000373},
	{0x000376, 0x000377},
	{0x00037A, 0x00037D},
	{0x00037F, 0x00037F},
	{0x000386, 0x000386},
	{0x000388, 0x00038A},
	{0x00038C, 0x00038C},
	{0x00038E, 0x0003A1},
	{0x0003A3, 0x0003F5},
	{0x0003F7, 0x000481},
	{0x00048A, 0x00052F},
	{0x000531, 0x000556},
	{0x000560, 0x000588},
	{0x0010A0, 0x0010C5},
	{0x0010C7, 0x0010C7},
	{0x0010CD, 0x0010CD},
	{0x0010D0, 0x0010FA},
	{0x0010FC, 0x0010FF},
	{0x0013A0, 0x0013F5},
	{0x0013F8, 0x0013FD},
	{0x001C80, 0x001C88},
	{0x001C90, 0x001CBA},
	{0x001CBD, 0x001CBF},
	{0x001D00, 0x001DBF},
	{0x001E00, 0x001F15},
	{0x001F18, 0x001F1D},
	{0x001F20, 0x001F45},
	{0x001F48, 0x001F4D},
	{0x001F50, 0x001F57},
	{0x001F59, 0x001F59},
	{0x001F5B, 0x001F5B},
	{0x001F5D, 0x001F5D},
	{0x001F5F, 0x001F7D},
	{0x001F80, 0x001FB4},
	{0x001FB6, 0x001FBC},
	{0x001FBE, 0x001FBE},
	{0x001FC2, 0x001FC4},
	{0x001FC6, 0x001FCC},
	{0x001FD0, 0x001FD3},
	{0x001FD6, 0x001FDB},
	{0x001FE0, 0x001FEC},
	{0x001FF2, 0x001FF4},
	{0x001FF6, 0x001FFC},
	{0x002071, 0x002071},
	{0x00207F, 0x00207F},
	{0x002090, 0x00209C},
	{0x002102, 0x002102},
	{0x002107, 0x002107},
	{0x00210A, 0x002113},
	{0x002115, 0x002115},
	{0x002119, 0x00211D},
	{0x002124, 0x002124},
	{0x002126, 0x002126},
	{0x002128, 0x002128},
	{0x00212A, 0x00212D},
	{0x00212F, 0x002134},
	{0x002139, 0x002139},
	{0x00213C, 0x00213F},
	{0x002145, 0x002149},
	{0x00214E, 0x00214E},
	{0x002160, 0x00217F},
	{0x002183, 0x002184},
	{0x0024B6, 0x0024E9},
	{0x002C00, 0x002CE4},
	{0x002CEB, 0x002CEE},
	{0x002CF2, 0x002CF3},
	{0x002D00, 0x002D25},
	{0x002D27, 0x002D27},
	{0x002D2D, 0x002D2D},
	{0x00A640, 0x00A66D},
	{0x00A680, 0x00A69D},
	{0x00A722, 0x00A787},
	{0x00A78B, 0x00A78E},
	{0x00A790, 0x00A7CA},
	{0x00A7D0, 0x00A7D1},
	{0x00A7D3, 0x00A7D3},
	{0x00A7D5, 0x00A7D9},
	{0x00A7F2, 0x00A7F6},
	{0x00A7F8, 0x00A7FA},
	{0x00AB30, 0x00AB5A},
	{0x00AB5C, 0x00AB69},
	{0x00AB70, 0x00ABBF},
	{0x00FB00, 0x00FB06},
	{0x00FB13, 0x00FB17},
	{0x00FF21, 0x00FF3A},
	{0x00FF41, 0x00FF5A},
	{0x010400, 0x01044F},
	{0x0104B0, 0x0104D3},
	{0x0104D8, 0x0104FB},
	{0x010570, 0x01057A},
	{0x01057C, 0x01058A},
	{0x01058C, 0x010592},
	{0x010594, 0x010595},
	{0x010597, 0x0105A1},
	{0x0105A3, 0x0105B1},
	{0x0105B3, 0x0105B9},
	{0x0105BB, 0x0105BC},
	{0x010780, 0x010780},
	{0x010783, 0x010785},
	{0x010787, 0x0107B0},
	{0x0107B2, 0x0107BA},
	{0x010C80, 0x010CB2},
	{0x010CC0, 0x010CF2},
	{0x0118A0, 0x0118DF},
	{0x016E40, 0x016E7F},
	{0x01D400, 0x01D454},
	{0x01D456, 0x01D49C},
	{0x01D49E, 0x01D49F},
	{0x01D4A2, 0x01D4A2},
	{0x01D4A5, 0x01D4A6},
	{0x01D4A9, 0x01D4AC},
	{0x01D4AE, 0x01D4B9},
	{0x01D4BB, 0x01D4BB},
	{0x01D4BD, 0x01D4C3},
	{0x01D4C5, 0x01D505},
	{0x01D507, 0x01D50A},
	{0x01D50D, 0x01D514},
	{0x01D516, 0x01D51C},
	{0x01D51E, 0x01D539},
	{0x01D53B, 0x01D53E},
	{0x01D540, 0x01D544},
	{0x01D546, 0x01D546},
	{0x01D54A, 0x01D550},
	{0x01D552, 0x01D6A5},
	{0x01D6A8, 0x01D6C0},
	{0x01D6C2, 0x01D6DA},
	{0x01D6DC, 0x01D6FA},
	{0x01D6FC, 0x01D714},
	{0x01D716, 0x01D734},
	{0x01D736, 0x01D74E},
	{0x01D750, 0x01D76E},
	{0x01D770, 0x01D788},
	{0x01D78A, 0x01D7A8},
	{0x01D7AA, 0x01D7C2},
	{0x01D7C4, 0x01D7CB},
	{0x01DF00, 0x01DF09},
	{0x01DF0B, 0x01DF1E},
	{0x01DF25, 0x01DF2A},
	{0x01E030, 0x01E06D},
	{0x01E900, 0x01E943},
	{0x01F130, 0x01F149},
	{0x01F150, 0x01F169},
	{0x01F170, 0x01F189},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_cased(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
