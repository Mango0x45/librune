/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/common.h"

/* clang-format off */

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x000300), RUNE_C(0x00034E)},
	{RUNE_C(0x000350), RUNE_C(0x00036F)},
	{RUNE_C(0x000483), RUNE_C(0x000487)},
	{RUNE_C(0x000591), RUNE_C(0x0005BD)},
	{RUNE_C(0x0005BF), RUNE_C(0x0005BF)},
	{RUNE_C(0x0005C1), RUNE_C(0x0005C2)},
	{RUNE_C(0x0005C4), RUNE_C(0x0005C5)},
	{RUNE_C(0x0005C7), RUNE_C(0x0005C7)},
	{RUNE_C(0x000610), RUNE_C(0x00061A)},
	{RUNE_C(0x00064B), RUNE_C(0x00065F)},
	{RUNE_C(0x000670), RUNE_C(0x000670)},
	{RUNE_C(0x0006D6), RUNE_C(0x0006DC)},
	{RUNE_C(0x0006DF), RUNE_C(0x0006E4)},
	{RUNE_C(0x0006E7), RUNE_C(0x0006E8)},
	{RUNE_C(0x0006EA), RUNE_C(0x0006ED)},
	{RUNE_C(0x000711), RUNE_C(0x000711)},
	{RUNE_C(0x000730), RUNE_C(0x00074A)},
	{RUNE_C(0x0007EB), RUNE_C(0x0007F3)},
	{RUNE_C(0x0007FD), RUNE_C(0x0007FD)},
	{RUNE_C(0x000816), RUNE_C(0x000819)},
	{RUNE_C(0x00081B), RUNE_C(0x000823)},
	{RUNE_C(0x000825), RUNE_C(0x000827)},
	{RUNE_C(0x000829), RUNE_C(0x00082D)},
	{RUNE_C(0x000859), RUNE_C(0x00085B)},
	{RUNE_C(0x000898), RUNE_C(0x00089F)},
	{RUNE_C(0x0008CA), RUNE_C(0x0008E1)},
	{RUNE_C(0x0008E3), RUNE_C(0x0008FF)},
	{RUNE_C(0x000915), RUNE_C(0x000939)},
	{RUNE_C(0x00093C), RUNE_C(0x00093C)},
	{RUNE_C(0x00094D), RUNE_C(0x00094D)},
	{RUNE_C(0x000951), RUNE_C(0x000954)},
	{RUNE_C(0x000958), RUNE_C(0x00095F)},
	{RUNE_C(0x000978), RUNE_C(0x00097F)},
	{RUNE_C(0x000995), RUNE_C(0x0009A8)},
	{RUNE_C(0x0009AA), RUNE_C(0x0009B0)},
	{RUNE_C(0x0009B2), RUNE_C(0x0009B2)},
	{RUNE_C(0x0009B6), RUNE_C(0x0009B9)},
	{RUNE_C(0x0009BC), RUNE_C(0x0009BC)},
	{RUNE_C(0x0009CD), RUNE_C(0x0009CD)},
	{RUNE_C(0x0009DC), RUNE_C(0x0009DD)},
	{RUNE_C(0x0009DF), RUNE_C(0x0009DF)},
	{RUNE_C(0x0009F0), RUNE_C(0x0009F1)},
	{RUNE_C(0x0009FE), RUNE_C(0x0009FE)},
	{RUNE_C(0x000A3C), RUNE_C(0x000A3C)},
	{RUNE_C(0x000A95), RUNE_C(0x000AA8)},
	{RUNE_C(0x000AAA), RUNE_C(0x000AB0)},
	{RUNE_C(0x000AB2), RUNE_C(0x000AB3)},
	{RUNE_C(0x000AB5), RUNE_C(0x000AB9)},
	{RUNE_C(0x000ABC), RUNE_C(0x000ABC)},
	{RUNE_C(0x000ACD), RUNE_C(0x000ACD)},
	{RUNE_C(0x000AF9), RUNE_C(0x000AF9)},
	{RUNE_C(0x000B15), RUNE_C(0x000B28)},
	{RUNE_C(0x000B2A), RUNE_C(0x000B30)},
	{RUNE_C(0x000B32), RUNE_C(0x000B33)},
	{RUNE_C(0x000B35), RUNE_C(0x000B39)},
	{RUNE_C(0x000B3C), RUNE_C(0x000B3C)},
	{RUNE_C(0x000B4D), RUNE_C(0x000B4D)},
	{RUNE_C(0x000B5C), RUNE_C(0x000B5D)},
	{RUNE_C(0x000B5F), RUNE_C(0x000B5F)},
	{RUNE_C(0x000B71), RUNE_C(0x000B71)},
	{RUNE_C(0x000C15), RUNE_C(0x000C28)},
	{RUNE_C(0x000C2A), RUNE_C(0x000C39)},
	{RUNE_C(0x000C3C), RUNE_C(0x000C3C)},
	{RUNE_C(0x000C4D), RUNE_C(0x000C4D)},
	{RUNE_C(0x000C55), RUNE_C(0x000C56)},
	{RUNE_C(0x000C58), RUNE_C(0x000C5A)},
	{RUNE_C(0x000CBC), RUNE_C(0x000CBC)},
	{RUNE_C(0x000D15), RUNE_C(0x000D3C)},
	{RUNE_C(0x000D4D), RUNE_C(0x000D4D)},
	{RUNE_C(0x000E38), RUNE_C(0x000E3A)},
	{RUNE_C(0x000E48), RUNE_C(0x000E4B)},
	{RUNE_C(0x000EB8), RUNE_C(0x000EBA)},
	{RUNE_C(0x000EC8), RUNE_C(0x000ECB)},
	{RUNE_C(0x000F18), RUNE_C(0x000F19)},
	{RUNE_C(0x000F35), RUNE_C(0x000F35)},
	{RUNE_C(0x000F37), RUNE_C(0x000F37)},
	{RUNE_C(0x000F39), RUNE_C(0x000F39)},
	{RUNE_C(0x000F71), RUNE_C(0x000F72)},
	{RUNE_C(0x000F74), RUNE_C(0x000F74)},
	{RUNE_C(0x000F7A), RUNE_C(0x000F7D)},
	{RUNE_C(0x000F80), RUNE_C(0x000F80)},
	{RUNE_C(0x000F82), RUNE_C(0x000F84)},
	{RUNE_C(0x000F86), RUNE_C(0x000F87)},
	{RUNE_C(0x000FC6), RUNE_C(0x000FC6)},
	{RUNE_C(0x001037), RUNE_C(0x001037)},
	{RUNE_C(0x001039), RUNE_C(0x00103A)},
	{RUNE_C(0x00108D), RUNE_C(0x00108D)},
	{RUNE_C(0x00135D), RUNE_C(0x00135F)},
	{RUNE_C(0x001714), RUNE_C(0x001714)},
	{RUNE_C(0x0017D2), RUNE_C(0x0017D2)},
	{RUNE_C(0x0017DD), RUNE_C(0x0017DD)},
	{RUNE_C(0x0018A9), RUNE_C(0x0018A9)},
	{RUNE_C(0x001939), RUNE_C(0x00193B)},
	{RUNE_C(0x001A17), RUNE_C(0x001A18)},
	{RUNE_C(0x001A60), RUNE_C(0x001A60)},
	{RUNE_C(0x001A75), RUNE_C(0x001A7C)},
	{RUNE_C(0x001A7F), RUNE_C(0x001A7F)},
	{RUNE_C(0x001AB0), RUNE_C(0x001ABD)},
	{RUNE_C(0x001ABF), RUNE_C(0x001ACE)},
	{RUNE_C(0x001B34), RUNE_C(0x001B34)},
	{RUNE_C(0x001B6B), RUNE_C(0x001B73)},
	{RUNE_C(0x001BAB), RUNE_C(0x001BAB)},
	{RUNE_C(0x001BE6), RUNE_C(0x001BE6)},
	{RUNE_C(0x001C37), RUNE_C(0x001C37)},
	{RUNE_C(0x001CD0), RUNE_C(0x001CD2)},
	{RUNE_C(0x001CD4), RUNE_C(0x001CE0)},
	{RUNE_C(0x001CE2), RUNE_C(0x001CE8)},
	{RUNE_C(0x001CED), RUNE_C(0x001CED)},
	{RUNE_C(0x001CF4), RUNE_C(0x001CF4)},
	{RUNE_C(0x001CF8), RUNE_C(0x001CF9)},
	{RUNE_C(0x001DC0), RUNE_C(0x001DFF)},
	{RUNE_C(0x00200D), RUNE_C(0x00200D)},
	{RUNE_C(0x0020D0), RUNE_C(0x0020DC)},
	{RUNE_C(0x0020E1), RUNE_C(0x0020E1)},
	{RUNE_C(0x0020E5), RUNE_C(0x0020F0)},
	{RUNE_C(0x002CEF), RUNE_C(0x002CF1)},
	{RUNE_C(0x002D7F), RUNE_C(0x002D7F)},
	{RUNE_C(0x002DE0), RUNE_C(0x002DFF)},
	{RUNE_C(0x00302A), RUNE_C(0x00302F)},
	{RUNE_C(0x003099), RUNE_C(0x00309A)},
	{RUNE_C(0x00A66F), RUNE_C(0x00A66F)},
	{RUNE_C(0x00A674), RUNE_C(0x00A67D)},
	{RUNE_C(0x00A69E), RUNE_C(0x00A69F)},
	{RUNE_C(0x00A6F0), RUNE_C(0x00A6F1)},
	{RUNE_C(0x00A82C), RUNE_C(0x00A82C)},
	{RUNE_C(0x00A8E0), RUNE_C(0x00A8F1)},
	{RUNE_C(0x00A92B), RUNE_C(0x00A92D)},
	{RUNE_C(0x00A9B3), RUNE_C(0x00A9B3)},
	{RUNE_C(0x00AAB0), RUNE_C(0x00AAB0)},
	{RUNE_C(0x00AAB2), RUNE_C(0x00AAB4)},
	{RUNE_C(0x00AAB7), RUNE_C(0x00AAB8)},
	{RUNE_C(0x00AABE), RUNE_C(0x00AABF)},
	{RUNE_C(0x00AAC1), RUNE_C(0x00AAC1)},
	{RUNE_C(0x00AAF6), RUNE_C(0x00AAF6)},
	{RUNE_C(0x00ABED), RUNE_C(0x00ABED)},
	{RUNE_C(0x00FB1E), RUNE_C(0x00FB1E)},
	{RUNE_C(0x00FE20), RUNE_C(0x00FE2F)},
	{RUNE_C(0x0101FD), RUNE_C(0x0101FD)},
	{RUNE_C(0x0102E0), RUNE_C(0x0102E0)},
	{RUNE_C(0x010376), RUNE_C(0x01037A)},
	{RUNE_C(0x010A0D), RUNE_C(0x010A0D)},
	{RUNE_C(0x010A0F), RUNE_C(0x010A0F)},
	{RUNE_C(0x010A38), RUNE_C(0x010A3A)},
	{RUNE_C(0x010A3F), RUNE_C(0x010A3F)},
	{RUNE_C(0x010AE5), RUNE_C(0x010AE6)},
	{RUNE_C(0x010D24), RUNE_C(0x010D27)},
	{RUNE_C(0x010EAB), RUNE_C(0x010EAC)},
	{RUNE_C(0x010EFD), RUNE_C(0x010EFF)},
	{RUNE_C(0x010F46), RUNE_C(0x010F50)},
	{RUNE_C(0x010F82), RUNE_C(0x010F85)},
	{RUNE_C(0x011070), RUNE_C(0x011070)},
	{RUNE_C(0x01107F), RUNE_C(0x01107F)},
	{RUNE_C(0x0110BA), RUNE_C(0x0110BA)},
	{RUNE_C(0x011100), RUNE_C(0x011102)},
	{RUNE_C(0x011133), RUNE_C(0x011134)},
	{RUNE_C(0x011173), RUNE_C(0x011173)},
	{RUNE_C(0x0111CA), RUNE_C(0x0111CA)},
	{RUNE_C(0x011236), RUNE_C(0x011236)},
	{RUNE_C(0x0112E9), RUNE_C(0x0112EA)},
	{RUNE_C(0x01133B), RUNE_C(0x01133C)},
	{RUNE_C(0x011366), RUNE_C(0x01136C)},
	{RUNE_C(0x011370), RUNE_C(0x011374)},
	{RUNE_C(0x011446), RUNE_C(0x011446)},
	{RUNE_C(0x01145E), RUNE_C(0x01145E)},
	{RUNE_C(0x0114C3), RUNE_C(0x0114C3)},
	{RUNE_C(0x0115C0), RUNE_C(0x0115C0)},
	{RUNE_C(0x0116B7), RUNE_C(0x0116B7)},
	{RUNE_C(0x01172B), RUNE_C(0x01172B)},
	{RUNE_C(0x01183A), RUNE_C(0x01183A)},
	{RUNE_C(0x01193E), RUNE_C(0x01193E)},
	{RUNE_C(0x011943), RUNE_C(0x011943)},
	{RUNE_C(0x011A34), RUNE_C(0x011A34)},
	{RUNE_C(0x011A47), RUNE_C(0x011A47)},
	{RUNE_C(0x011A99), RUNE_C(0x011A99)},
	{RUNE_C(0x011D42), RUNE_C(0x011D42)},
	{RUNE_C(0x011D44), RUNE_C(0x011D45)},
	{RUNE_C(0x011D97), RUNE_C(0x011D97)},
	{RUNE_C(0x011F42), RUNE_C(0x011F42)},
	{RUNE_C(0x016AF0), RUNE_C(0x016AF4)},
	{RUNE_C(0x016B30), RUNE_C(0x016B36)},
	{RUNE_C(0x01BC9E), RUNE_C(0x01BC9E)},
	{RUNE_C(0x01D165), RUNE_C(0x01D165)},
	{RUNE_C(0x01D167), RUNE_C(0x01D169)},
	{RUNE_C(0x01D16E), RUNE_C(0x01D172)},
	{RUNE_C(0x01D17B), RUNE_C(0x01D182)},
	{RUNE_C(0x01D185), RUNE_C(0x01D18B)},
	{RUNE_C(0x01D1AA), RUNE_C(0x01D1AD)},
	{RUNE_C(0x01D242), RUNE_C(0x01D244)},
	{RUNE_C(0x01E000), RUNE_C(0x01E006)},
	{RUNE_C(0x01E008), RUNE_C(0x01E018)},
	{RUNE_C(0x01E01B), RUNE_C(0x01E021)},
	{RUNE_C(0x01E023), RUNE_C(0x01E024)},
	{RUNE_C(0x01E026), RUNE_C(0x01E02A)},
	{RUNE_C(0x01E08F), RUNE_C(0x01E08F)},
	{RUNE_C(0x01E130), RUNE_C(0x01E136)},
	{RUNE_C(0x01E2AE), RUNE_C(0x01E2AE)},
	{RUNE_C(0x01E2EC), RUNE_C(0x01E2EF)},
	{RUNE_C(0x01E4EC), RUNE_C(0x01E4EF)},
	{RUNE_C(0x01E8D0), RUNE_C(0x01E8D6)},
	{RUNE_C(0x01E944), RUNE_C(0x01E94A)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_incb(rune ch)
{
	return lookup(ch);
}
