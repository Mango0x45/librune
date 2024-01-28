/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000300, 0x00034E},
	{0x000350, 0x00036F},
	{0x000483, 0x000487},
	{0x000591, 0x0005BD},
	{0x0005BF, 0x0005BF},
	{0x0005C1, 0x0005C2},
	{0x0005C4, 0x0005C5},
	{0x0005C7, 0x0005C7},
	{0x000610, 0x00061A},
	{0x00064B, 0x00065F},
	{0x000670, 0x000670},
	{0x0006D6, 0x0006DC},
	{0x0006DF, 0x0006E4},
	{0x0006E7, 0x0006E8},
	{0x0006EA, 0x0006ED},
	{0x000711, 0x000711},
	{0x000730, 0x00074A},
	{0x0007EB, 0x0007F3},
	{0x0007FD, 0x0007FD},
	{0x000816, 0x000819},
	{0x00081B, 0x000823},
	{0x000825, 0x000827},
	{0x000829, 0x00082D},
	{0x000859, 0x00085B},
	{0x000898, 0x00089F},
	{0x0008CA, 0x0008E1},
	{0x0008E3, 0x0008FF},
	{0x000915, 0x000939},
	{0x00093C, 0x00093C},
	{0x00094D, 0x00094D},
	{0x000951, 0x000954},
	{0x000958, 0x00095F},
	{0x000978, 0x00097F},
	{0x000995, 0x0009A8},
	{0x0009AA, 0x0009B0},
	{0x0009B2, 0x0009B2},
	{0x0009B6, 0x0009B9},
	{0x0009BC, 0x0009BC},
	{0x0009CD, 0x0009CD},
	{0x0009DC, 0x0009DD},
	{0x0009DF, 0x0009DF},
	{0x0009F0, 0x0009F1},
	{0x0009FE, 0x0009FE},
	{0x000A3C, 0x000A3C},
	{0x000A95, 0x000AA8},
	{0x000AAA, 0x000AB0},
	{0x000AB2, 0x000AB3},
	{0x000AB5, 0x000AB9},
	{0x000ABC, 0x000ABC},
	{0x000ACD, 0x000ACD},
	{0x000AF9, 0x000AF9},
	{0x000B15, 0x000B28},
	{0x000B2A, 0x000B30},
	{0x000B32, 0x000B33},
	{0x000B35, 0x000B39},
	{0x000B3C, 0x000B3C},
	{0x000B4D, 0x000B4D},
	{0x000B5C, 0x000B5D},
	{0x000B5F, 0x000B5F},
	{0x000B71, 0x000B71},
	{0x000C15, 0x000C28},
	{0x000C2A, 0x000C39},
	{0x000C3C, 0x000C3C},
	{0x000C4D, 0x000C4D},
	{0x000C55, 0x000C56},
	{0x000C58, 0x000C5A},
	{0x000CBC, 0x000CBC},
	{0x000D15, 0x000D3C},
	{0x000D4D, 0x000D4D},
	{0x000E38, 0x000E3A},
	{0x000E48, 0x000E4B},
	{0x000EB8, 0x000EBA},
	{0x000EC8, 0x000ECB},
	{0x000F18, 0x000F19},
	{0x000F35, 0x000F35},
	{0x000F37, 0x000F37},
	{0x000F39, 0x000F39},
	{0x000F71, 0x000F72},
	{0x000F74, 0x000F74},
	{0x000F7A, 0x000F7D},
	{0x000F80, 0x000F80},
	{0x000F82, 0x000F84},
	{0x000F86, 0x000F87},
	{0x000FC6, 0x000FC6},
	{0x001037, 0x001037},
	{0x001039, 0x00103A},
	{0x00108D, 0x00108D},
	{0x00135D, 0x00135F},
	{0x001714, 0x001714},
	{0x0017D2, 0x0017D2},
	{0x0017DD, 0x0017DD},
	{0x0018A9, 0x0018A9},
	{0x001939, 0x00193B},
	{0x001A17, 0x001A18},
	{0x001A60, 0x001A60},
	{0x001A75, 0x001A7C},
	{0x001A7F, 0x001A7F},
	{0x001AB0, 0x001ABD},
	{0x001ABF, 0x001ACE},
	{0x001B34, 0x001B34},
	{0x001B6B, 0x001B73},
	{0x001BAB, 0x001BAB},
	{0x001BE6, 0x001BE6},
	{0x001C37, 0x001C37},
	{0x001CD0, 0x001CD2},
	{0x001CD4, 0x001CE0},
	{0x001CE2, 0x001CE8},
	{0x001CED, 0x001CED},
	{0x001CF4, 0x001CF4},
	{0x001CF8, 0x001CF9},
	{0x001DC0, 0x001DFF},
	{0x00200D, 0x00200D},
	{0x0020D0, 0x0020DC},
	{0x0020E1, 0x0020E1},
	{0x0020E5, 0x0020F0},
	{0x002CEF, 0x002CF1},
	{0x002D7F, 0x002D7F},
	{0x002DE0, 0x002DFF},
	{0x00302A, 0x00302F},
	{0x003099, 0x00309A},
	{0x00A66F, 0x00A66F},
	{0x00A674, 0x00A67D},
	{0x00A69E, 0x00A69F},
	{0x00A6F0, 0x00A6F1},
	{0x00A82C, 0x00A82C},
	{0x00A8E0, 0x00A8F1},
	{0x00A92B, 0x00A92D},
	{0x00A9B3, 0x00A9B3},
	{0x00AAB0, 0x00AAB0},
	{0x00AAB2, 0x00AAB4},
	{0x00AAB7, 0x00AAB8},
	{0x00AABE, 0x00AABF},
	{0x00AAC1, 0x00AAC1},
	{0x00AAF6, 0x00AAF6},
	{0x00ABED, 0x00ABED},
	{0x00FB1E, 0x00FB1E},
	{0x00FE20, 0x00FE2F},
	{0x0101FD, 0x0101FD},
	{0x0102E0, 0x0102E0},
	{0x010376, 0x01037A},
	{0x010A0D, 0x010A0D},
	{0x010A0F, 0x010A0F},
	{0x010A38, 0x010A3A},
	{0x010A3F, 0x010A3F},
	{0x010AE5, 0x010AE6},
	{0x010D24, 0x010D27},
	{0x010EAB, 0x010EAC},
	{0x010EFD, 0x010EFF},
	{0x010F46, 0x010F50},
	{0x010F82, 0x010F85},
	{0x011070, 0x011070},
	{0x01107F, 0x01107F},
	{0x0110BA, 0x0110BA},
	{0x011100, 0x011102},
	{0x011133, 0x011134},
	{0x011173, 0x011173},
	{0x0111CA, 0x0111CA},
	{0x011236, 0x011236},
	{0x0112E9, 0x0112EA},
	{0x01133B, 0x01133C},
	{0x011366, 0x01136C},
	{0x011370, 0x011374},
	{0x011446, 0x011446},
	{0x01145E, 0x01145E},
	{0x0114C3, 0x0114C3},
	{0x0115C0, 0x0115C0},
	{0x0116B7, 0x0116B7},
	{0x01172B, 0x01172B},
	{0x01183A, 0x01183A},
	{0x01193E, 0x01193E},
	{0x011943, 0x011943},
	{0x011A34, 0x011A34},
	{0x011A47, 0x011A47},
	{0x011A99, 0x011A99},
	{0x011D42, 0x011D42},
	{0x011D44, 0x011D45},
	{0x011D97, 0x011D97},
	{0x011F42, 0x011F42},
	{0x016AF0, 0x016AF4},
	{0x016B30, 0x016B36},
	{0x01BC9E, 0x01BC9E},
	{0x01D165, 0x01D165},
	{0x01D167, 0x01D169},
	{0x01D16E, 0x01D172},
	{0x01D17B, 0x01D182},
	{0x01D185, 0x01D18B},
	{0x01D1AA, 0x01D1AD},
	{0x01D242, 0x01D244},
	{0x01E000, 0x01E006},
	{0x01E008, 0x01E018},
	{0x01E01B, 0x01E021},
	{0x01E023, 0x01E024},
	{0x01E026, 0x01E02A},
	{0x01E08F, 0x01E08F},
	{0x01E130, 0x01E136},
	{0x01E2AE, 0x01E2AE},
	{0x01E2EC, 0x01E2EF},
	{0x01E4EC, 0x01E4EF},
	{0x01E8D0, 0x01E8D6},
	{0x01E944, 0x01E94A},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_indic_conjunct_break(rune ch)
{
	return lookup(ch);
}
