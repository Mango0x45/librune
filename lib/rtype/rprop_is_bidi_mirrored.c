/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask =
	0x0000000000000000080008000000000028000000280000005000030000000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000028, 0x000029},
	{0x00003C, 0x00003C},
	{0x00003E, 0x00003E},
	{0x00005B, 0x00005B},
	{0x00005D, 0x00005D},
	{0x00007B, 0x00007B},
	{0x00007D, 0x00007D},
	{0x0000AB, 0x0000AB},
	{0x0000BB, 0x0000BB},
	{0x000F3A, 0x000F3D},
	{0x00169B, 0x00169C},
	{0x002039, 0x00203A},
	{0x002045, 0x002046},
	{0x00207D, 0x00207E},
	{0x00208D, 0x00208E},
	{0x002140, 0x002140},
	{0x002201, 0x002204},
	{0x002208, 0x00220D},
	{0x002211, 0x002211},
	{0x002215, 0x002216},
	{0x00221A, 0x00221D},
	{0x00221F, 0x002222},
	{0x002224, 0x002224},
	{0x002226, 0x002226},
	{0x00222B, 0x002233},
	{0x002239, 0x002239},
	{0x00223B, 0x00224C},
	{0x002252, 0x002255},
	{0x00225F, 0x002260},
	{0x002262, 0x002262},
	{0x002264, 0x00226B},
	{0x00226E, 0x00228C},
	{0x00228F, 0x002292},
	{0x002298, 0x002298},
	{0x0022A2, 0x0022A3},
	{0x0022A6, 0x0022B8},
	{0x0022BE, 0x0022BF},
	{0x0022C9, 0x0022CD},
	{0x0022D0, 0x0022D1},
	{0x0022D6, 0x0022ED},
	{0x0022F0, 0x0022FF},
	{0x002308, 0x00230B},
	{0x002320, 0x002321},
	{0x002329, 0x00232A},
	{0x002768, 0x002775},
	{0x0027C0, 0x0027C0},
	{0x0027C3, 0x0027C6},
	{0x0027C8, 0x0027C9},
	{0x0027CB, 0x0027CD},
	{0x0027D3, 0x0027D6},
	{0x0027DC, 0x0027DE},
	{0x0027E2, 0x0027EF},
	{0x002983, 0x002998},
	{0x00299B, 0x0029A0},
	{0x0029A2, 0x0029AF},
	{0x0029B8, 0x0029B8},
	{0x0029C0, 0x0029C5},
	{0x0029C9, 0x0029C9},
	{0x0029CE, 0x0029D2},
	{0x0029D4, 0x0029D5},
	{0x0029D8, 0x0029DC},
	{0x0029E1, 0x0029E1},
	{0x0029E3, 0x0029E5},
	{0x0029E8, 0x0029E9},
	{0x0029F4, 0x0029F9},
	{0x0029FC, 0x0029FD},
	{0x002A0A, 0x002A1C},
	{0x002A1E, 0x002A21},
	{0x002A24, 0x002A24},
	{0x002A26, 0x002A26},
	{0x002A29, 0x002A29},
	{0x002A2B, 0x002A2E},
	{0x002A34, 0x002A35},
	{0x002A3C, 0x002A3E},
	{0x002A57, 0x002A58},
	{0x002A64, 0x002A65},
	{0x002A6A, 0x002A6D},
	{0x002A6F, 0x002A70},
	{0x002A73, 0x002A74},
	{0x002A79, 0x002AA3},
	{0x002AA6, 0x002AAD},
	{0x002AAF, 0x002AD6},
	{0x002ADC, 0x002ADC},
	{0x002ADE, 0x002ADE},
	{0x002AE2, 0x002AE6},
	{0x002AEC, 0x002AEE},
	{0x002AF3, 0x002AF3},
	{0x002AF7, 0x002AFB},
	{0x002AFD, 0x002AFD},
	{0x002BFE, 0x002BFE},
	{0x002E02, 0x002E05},
	{0x002E09, 0x002E0A},
	{0x002E0C, 0x002E0D},
	{0x002E1C, 0x002E1D},
	{0x002E20, 0x002E29},
	{0x002E55, 0x002E5C},
	{0x003008, 0x003011},
	{0x003014, 0x00301B},
	{0x00FE59, 0x00FE5E},
	{0x00FE64, 0x00FE65},
	{0x00FF08, 0x00FF09},
	{0x00FF1C, 0x00FF1C},
	{0x00FF1E, 0x00FF1E},
	{0x00FF3B, 0x00FF3B},
	{0x00FF3D, 0x00FF3D},
	{0x00FF5B, 0x00FF5B},
	{0x00FF5D, 0x00FF5D},
	{0x00FF5F, 0x00FF60},
	{0x00FF62, 0x00FF63},
	{0x01D6DB, 0x01D6DB},
	{0x01D715, 0x01D715},
	{0x01D74F, 0x01D74F},
	{0x01D789, 0x01D789},
	{0x01D7C3, 0x01D7C3},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_bidi_mirrored(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}