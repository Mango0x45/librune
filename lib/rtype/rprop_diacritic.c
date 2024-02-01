/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask =
	0x0000000000000000019081000000000000000001400000000000000000000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x00005E, 0x00005E},
	{0x000060, 0x000060},
	{0x0000A8, 0x0000A8},
	{0x0000AF, 0x0000AF},
	{0x0000B4, 0x0000B4},
	{0x0000B7, 0x0000B8},
	{0x0002B0, 0x00034E},
	{0x000350, 0x000357},
	{0x00035D, 0x000362},
	{0x000374, 0x000375},
	{0x00037A, 0x00037A},
	{0x000384, 0x000385},
	{0x000483, 0x000487},
	{0x000559, 0x000559},
	{0x000591, 0x0005A1},
	{0x0005A3, 0x0005BD},
	{0x0005BF, 0x0005BF},
	{0x0005C1, 0x0005C2},
	{0x0005C4, 0x0005C4},
	{0x00064B, 0x000652},
	{0x000657, 0x000658},
	{0x0006DF, 0x0006E0},
	{0x0006E5, 0x0006E6},
	{0x0006EA, 0x0006EC},
	{0x000730, 0x00074A},
	{0x0007A6, 0x0007B0},
	{0x0007EB, 0x0007F5},
	{0x000818, 0x000819},
	{0x000898, 0x00089F},
	{0x0008C9, 0x0008D2},
	{0x0008E3, 0x0008FE},
	{0x00093C, 0x00093C},
	{0x00094D, 0x00094D},
	{0x000951, 0x000954},
	{0x000971, 0x000971},
	{0x0009BC, 0x0009BC},
	{0x0009CD, 0x0009CD},
	{0x000A3C, 0x000A3C},
	{0x000A4D, 0x000A4D},
	{0x000ABC, 0x000ABC},
	{0x000ACD, 0x000ACD},
	{0x000AFD, 0x000AFF},
	{0x000B3C, 0x000B3C},
	{0x000B4D, 0x000B4D},
	{0x000B55, 0x000B55},
	{0x000BCD, 0x000BCD},
	{0x000C3C, 0x000C3C},
	{0x000C4D, 0x000C4D},
	{0x000CBC, 0x000CBC},
	{0x000CCD, 0x000CCD},
	{0x000D3B, 0x000D3C},
	{0x000D4D, 0x000D4D},
	{0x000DCA, 0x000DCA},
	{0x000E47, 0x000E4C},
	{0x000E4E, 0x000E4E},
	{0x000EBA, 0x000EBA},
	{0x000EC8, 0x000ECC},
	{0x000F18, 0x000F19},
	{0x000F35, 0x000F35},
	{0x000F37, 0x000F37},
	{0x000F39, 0x000F39},
	{0x000F3E, 0x000F3F},
	{0x000F82, 0x000F84},
	{0x000F86, 0x000F87},
	{0x000FC6, 0x000FC6},
	{0x001037, 0x001037},
	{0x001039, 0x00103A},
	{0x001063, 0x001064},
	{0x001069, 0x00106D},
	{0x001087, 0x00108D},
	{0x00108F, 0x00108F},
	{0x00109A, 0x00109B},
	{0x00135D, 0x00135F},
	{0x001714, 0x001715},
	{0x0017C9, 0x0017D3},
	{0x0017DD, 0x0017DD},
	{0x001939, 0x00193B},
	{0x001A75, 0x001A7C},
	{0x001A7F, 0x001A7F},
	{0x001AB0, 0x001ABE},
	{0x001AC1, 0x001ACB},
	{0x001B34, 0x001B34},
	{0x001B44, 0x001B44},
	{0x001B6B, 0x001B73},
	{0x001BAA, 0x001BAB},
	{0x001C36, 0x001C37},
	{0x001C78, 0x001C7D},
	{0x001CD0, 0x001CE8},
	{0x001CED, 0x001CED},
	{0x001CF4, 0x001CF4},
	{0x001CF7, 0x001CF9},
	{0x001D2C, 0x001D6A},
	{0x001DC4, 0x001DCF},
	{0x001DF5, 0x001DFF},
	{0x001FBD, 0x001FBD},
	{0x001FBF, 0x001FC1},
	{0x001FCD, 0x001FCF},
	{0x001FDD, 0x001FDF},
	{0x001FED, 0x001FEF},
	{0x001FFD, 0x001FFE},
	{0x002CEF, 0x002CF1},
	{0x002E2F, 0x002E2F},
	{0x00302A, 0x00302F},
	{0x003099, 0x00309C},
	{0x0030FC, 0x0030FC},
	{0x00A66F, 0x00A66F},
	{0x00A67C, 0x00A67D},
	{0x00A67F, 0x00A67F},
	{0x00A69C, 0x00A69D},
	{0x00A6F0, 0x00A6F1},
	{0x00A700, 0x00A721},
	{0x00A788, 0x00A78A},
	{0x00A7F8, 0x00A7F9},
	{0x00A8C4, 0x00A8C4},
	{0x00A8E0, 0x00A8F1},
	{0x00A92B, 0x00A92E},
	{0x00A953, 0x00A953},
	{0x00A9B3, 0x00A9B3},
	{0x00A9C0, 0x00A9C0},
	{0x00A9E5, 0x00A9E5},
	{0x00AA7B, 0x00AA7D},
	{0x00AABF, 0x00AAC2},
	{0x00AAF6, 0x00AAF6},
	{0x00AB5B, 0x00AB5F},
	{0x00AB69, 0x00AB6B},
	{0x00ABEC, 0x00ABED},
	{0x00FB1E, 0x00FB1E},
	{0x00FE20, 0x00FE2F},
	{0x00FF3E, 0x00FF3E},
	{0x00FF40, 0x00FF40},
	{0x00FF70, 0x00FF70},
	{0x00FF9E, 0x00FF9F},
	{0x00FFE3, 0x00FFE3},
	{0x0102E0, 0x0102E0},
	{0x010780, 0x010785},
	{0x010787, 0x0107B0},
	{0x0107B2, 0x0107BA},
	{0x010AE5, 0x010AE6},
	{0x010D22, 0x010D27},
	{0x010EFD, 0x010EFF},
	{0x010F46, 0x010F50},
	{0x010F82, 0x010F85},
	{0x011046, 0x011046},
	{0x011070, 0x011070},
	{0x0110B9, 0x0110BA},
	{0x011133, 0x011134},
	{0x011173, 0x011173},
	{0x0111C0, 0x0111C0},
	{0x0111CA, 0x0111CC},
	{0x011235, 0x011236},
	{0x0112E9, 0x0112EA},
	{0x01133C, 0x01133C},
	{0x01134D, 0x01134D},
	{0x011366, 0x01136C},
	{0x011370, 0x011374},
	{0x011442, 0x011442},
	{0x011446, 0x011446},
	{0x0114C2, 0x0114C3},
	{0x0115BF, 0x0115C0},
	{0x01163F, 0x01163F},
	{0x0116B6, 0x0116B7},
	{0x01172B, 0x01172B},
	{0x011839, 0x01183A},
	{0x01193D, 0x01193E},
	{0x011943, 0x011943},
	{0x0119E0, 0x0119E0},
	{0x011A34, 0x011A34},
	{0x011A47, 0x011A47},
	{0x011A99, 0x011A99},
	{0x011C3F, 0x011C3F},
	{0x011D42, 0x011D42},
	{0x011D44, 0x011D45},
	{0x011D97, 0x011D97},
	{0x013447, 0x013455},
	{0x016AF0, 0x016AF4},
	{0x016B30, 0x016B36},
	{0x016F8F, 0x016F9F},
	{0x016FF0, 0x016FF1},
	{0x01AFF0, 0x01AFF3},
	{0x01AFF5, 0x01AFFB},
	{0x01AFFD, 0x01AFFE},
	{0x01CF00, 0x01CF2D},
	{0x01CF30, 0x01CF46},
	{0x01D167, 0x01D169},
	{0x01D16D, 0x01D172},
	{0x01D17B, 0x01D182},
	{0x01D185, 0x01D18B},
	{0x01D1AA, 0x01D1AD},
	{0x01E030, 0x01E06D},
	{0x01E130, 0x01E136},
	{0x01E2AE, 0x01E2AE},
	{0x01E2EC, 0x01E2EF},
	{0x01E8D0, 0x01E8D6},
	{0x01E944, 0x01E946},
	{0x01E948, 0x01E94A},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_diacritic(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
