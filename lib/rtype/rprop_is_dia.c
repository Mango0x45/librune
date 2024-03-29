/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x0000000000000000),
	UINT64_C(0x0000000140000000),
	UINT64_C(0x0190810000000000),
	UINT64_C(0x0000000000000000),
};

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x0002B0), RUNE_C(0x00034E)},
	{RUNE_C(0x000350), RUNE_C(0x000357)},
	{RUNE_C(0x00035D), RUNE_C(0x000362)},
	{RUNE_C(0x000374), RUNE_C(0x000375)},
	{RUNE_C(0x00037A), RUNE_C(0x00037A)},
	{RUNE_C(0x000384), RUNE_C(0x000385)},
	{RUNE_C(0x000483), RUNE_C(0x000487)},
	{RUNE_C(0x000559), RUNE_C(0x000559)},
	{RUNE_C(0x000591), RUNE_C(0x0005A1)},
	{RUNE_C(0x0005A3), RUNE_C(0x0005BD)},
	{RUNE_C(0x0005BF), RUNE_C(0x0005BF)},
	{RUNE_C(0x0005C1), RUNE_C(0x0005C2)},
	{RUNE_C(0x0005C4), RUNE_C(0x0005C4)},
	{RUNE_C(0x00064B), RUNE_C(0x000652)},
	{RUNE_C(0x000657), RUNE_C(0x000658)},
	{RUNE_C(0x0006DF), RUNE_C(0x0006E0)},
	{RUNE_C(0x0006E5), RUNE_C(0x0006E6)},
	{RUNE_C(0x0006EA), RUNE_C(0x0006EC)},
	{RUNE_C(0x000730), RUNE_C(0x00074A)},
	{RUNE_C(0x0007A6), RUNE_C(0x0007B0)},
	{RUNE_C(0x0007EB), RUNE_C(0x0007F5)},
	{RUNE_C(0x000818), RUNE_C(0x000819)},
	{RUNE_C(0x000898), RUNE_C(0x00089F)},
	{RUNE_C(0x0008C9), RUNE_C(0x0008D2)},
	{RUNE_C(0x0008E3), RUNE_C(0x0008FE)},
	{RUNE_C(0x00093C), RUNE_C(0x00093C)},
	{RUNE_C(0x00094D), RUNE_C(0x00094D)},
	{RUNE_C(0x000951), RUNE_C(0x000954)},
	{RUNE_C(0x000971), RUNE_C(0x000971)},
	{RUNE_C(0x0009BC), RUNE_C(0x0009BC)},
	{RUNE_C(0x0009CD), RUNE_C(0x0009CD)},
	{RUNE_C(0x000A3C), RUNE_C(0x000A3C)},
	{RUNE_C(0x000A4D), RUNE_C(0x000A4D)},
	{RUNE_C(0x000ABC), RUNE_C(0x000ABC)},
	{RUNE_C(0x000ACD), RUNE_C(0x000ACD)},
	{RUNE_C(0x000AFD), RUNE_C(0x000AFF)},
	{RUNE_C(0x000B3C), RUNE_C(0x000B3C)},
	{RUNE_C(0x000B4D), RUNE_C(0x000B4D)},
	{RUNE_C(0x000B55), RUNE_C(0x000B55)},
	{RUNE_C(0x000BCD), RUNE_C(0x000BCD)},
	{RUNE_C(0x000C3C), RUNE_C(0x000C3C)},
	{RUNE_C(0x000C4D), RUNE_C(0x000C4D)},
	{RUNE_C(0x000CBC), RUNE_C(0x000CBC)},
	{RUNE_C(0x000CCD), RUNE_C(0x000CCD)},
	{RUNE_C(0x000D3B), RUNE_C(0x000D3C)},
	{RUNE_C(0x000D4D), RUNE_C(0x000D4D)},
	{RUNE_C(0x000DCA), RUNE_C(0x000DCA)},
	{RUNE_C(0x000E47), RUNE_C(0x000E4C)},
	{RUNE_C(0x000E4E), RUNE_C(0x000E4E)},
	{RUNE_C(0x000EBA), RUNE_C(0x000EBA)},
	{RUNE_C(0x000EC8), RUNE_C(0x000ECC)},
	{RUNE_C(0x000F18), RUNE_C(0x000F19)},
	{RUNE_C(0x000F35), RUNE_C(0x000F35)},
	{RUNE_C(0x000F37), RUNE_C(0x000F37)},
	{RUNE_C(0x000F39), RUNE_C(0x000F39)},
	{RUNE_C(0x000F3E), RUNE_C(0x000F3F)},
	{RUNE_C(0x000F82), RUNE_C(0x000F84)},
	{RUNE_C(0x000F86), RUNE_C(0x000F87)},
	{RUNE_C(0x000FC6), RUNE_C(0x000FC6)},
	{RUNE_C(0x001037), RUNE_C(0x001037)},
	{RUNE_C(0x001039), RUNE_C(0x00103A)},
	{RUNE_C(0x001063), RUNE_C(0x001064)},
	{RUNE_C(0x001069), RUNE_C(0x00106D)},
	{RUNE_C(0x001087), RUNE_C(0x00108D)},
	{RUNE_C(0x00108F), RUNE_C(0x00108F)},
	{RUNE_C(0x00109A), RUNE_C(0x00109B)},
	{RUNE_C(0x00135D), RUNE_C(0x00135F)},
	{RUNE_C(0x001714), RUNE_C(0x001715)},
	{RUNE_C(0x0017C9), RUNE_C(0x0017D3)},
	{RUNE_C(0x0017DD), RUNE_C(0x0017DD)},
	{RUNE_C(0x001939), RUNE_C(0x00193B)},
	{RUNE_C(0x001A75), RUNE_C(0x001A7C)},
	{RUNE_C(0x001A7F), RUNE_C(0x001A7F)},
	{RUNE_C(0x001AB0), RUNE_C(0x001ABE)},
	{RUNE_C(0x001AC1), RUNE_C(0x001ACB)},
	{RUNE_C(0x001B34), RUNE_C(0x001B34)},
	{RUNE_C(0x001B44), RUNE_C(0x001B44)},
	{RUNE_C(0x001B6B), RUNE_C(0x001B73)},
	{RUNE_C(0x001BAA), RUNE_C(0x001BAB)},
	{RUNE_C(0x001C36), RUNE_C(0x001C37)},
	{RUNE_C(0x001C78), RUNE_C(0x001C7D)},
	{RUNE_C(0x001CD0), RUNE_C(0x001CE8)},
	{RUNE_C(0x001CED), RUNE_C(0x001CED)},
	{RUNE_C(0x001CF4), RUNE_C(0x001CF4)},
	{RUNE_C(0x001CF7), RUNE_C(0x001CF9)},
	{RUNE_C(0x001D2C), RUNE_C(0x001D6A)},
	{RUNE_C(0x001DC4), RUNE_C(0x001DCF)},
	{RUNE_C(0x001DF5), RUNE_C(0x001DFF)},
	{RUNE_C(0x001FBD), RUNE_C(0x001FBD)},
	{RUNE_C(0x001FBF), RUNE_C(0x001FC1)},
	{RUNE_C(0x001FCD), RUNE_C(0x001FCF)},
	{RUNE_C(0x001FDD), RUNE_C(0x001FDF)},
	{RUNE_C(0x001FED), RUNE_C(0x001FEF)},
	{RUNE_C(0x001FFD), RUNE_C(0x001FFE)},
	{RUNE_C(0x002CEF), RUNE_C(0x002CF1)},
	{RUNE_C(0x002E2F), RUNE_C(0x002E2F)},
	{RUNE_C(0x00302A), RUNE_C(0x00302F)},
	{RUNE_C(0x003099), RUNE_C(0x00309C)},
	{RUNE_C(0x0030FC), RUNE_C(0x0030FC)},
	{RUNE_C(0x00A66F), RUNE_C(0x00A66F)},
	{RUNE_C(0x00A67C), RUNE_C(0x00A67D)},
	{RUNE_C(0x00A67F), RUNE_C(0x00A67F)},
	{RUNE_C(0x00A69C), RUNE_C(0x00A69D)},
	{RUNE_C(0x00A6F0), RUNE_C(0x00A6F1)},
	{RUNE_C(0x00A700), RUNE_C(0x00A721)},
	{RUNE_C(0x00A788), RUNE_C(0x00A78A)},
	{RUNE_C(0x00A7F8), RUNE_C(0x00A7F9)},
	{RUNE_C(0x00A8C4), RUNE_C(0x00A8C4)},
	{RUNE_C(0x00A8E0), RUNE_C(0x00A8F1)},
	{RUNE_C(0x00A92B), RUNE_C(0x00A92E)},
	{RUNE_C(0x00A953), RUNE_C(0x00A953)},
	{RUNE_C(0x00A9B3), RUNE_C(0x00A9B3)},
	{RUNE_C(0x00A9C0), RUNE_C(0x00A9C0)},
	{RUNE_C(0x00A9E5), RUNE_C(0x00A9E5)},
	{RUNE_C(0x00AA7B), RUNE_C(0x00AA7D)},
	{RUNE_C(0x00AABF), RUNE_C(0x00AAC2)},
	{RUNE_C(0x00AAF6), RUNE_C(0x00AAF6)},
	{RUNE_C(0x00AB5B), RUNE_C(0x00AB5F)},
	{RUNE_C(0x00AB69), RUNE_C(0x00AB6B)},
	{RUNE_C(0x00ABEC), RUNE_C(0x00ABED)},
	{RUNE_C(0x00FB1E), RUNE_C(0x00FB1E)},
	{RUNE_C(0x00FE20), RUNE_C(0x00FE2F)},
	{RUNE_C(0x00FF3E), RUNE_C(0x00FF3E)},
	{RUNE_C(0x00FF40), RUNE_C(0x00FF40)},
	{RUNE_C(0x00FF70), RUNE_C(0x00FF70)},
	{RUNE_C(0x00FF9E), RUNE_C(0x00FF9F)},
	{RUNE_C(0x00FFE3), RUNE_C(0x00FFE3)},
	{RUNE_C(0x0102E0), RUNE_C(0x0102E0)},
	{RUNE_C(0x010780), RUNE_C(0x010785)},
	{RUNE_C(0x010787), RUNE_C(0x0107B0)},
	{RUNE_C(0x0107B2), RUNE_C(0x0107BA)},
	{RUNE_C(0x010AE5), RUNE_C(0x010AE6)},
	{RUNE_C(0x010D22), RUNE_C(0x010D27)},
	{RUNE_C(0x010EFD), RUNE_C(0x010EFF)},
	{RUNE_C(0x010F46), RUNE_C(0x010F50)},
	{RUNE_C(0x010F82), RUNE_C(0x010F85)},
	{RUNE_C(0x011046), RUNE_C(0x011046)},
	{RUNE_C(0x011070), RUNE_C(0x011070)},
	{RUNE_C(0x0110B9), RUNE_C(0x0110BA)},
	{RUNE_C(0x011133), RUNE_C(0x011134)},
	{RUNE_C(0x011173), RUNE_C(0x011173)},
	{RUNE_C(0x0111C0), RUNE_C(0x0111C0)},
	{RUNE_C(0x0111CA), RUNE_C(0x0111CC)},
	{RUNE_C(0x011235), RUNE_C(0x011236)},
	{RUNE_C(0x0112E9), RUNE_C(0x0112EA)},
	{RUNE_C(0x01133C), RUNE_C(0x01133C)},
	{RUNE_C(0x01134D), RUNE_C(0x01134D)},
	{RUNE_C(0x011366), RUNE_C(0x01136C)},
	{RUNE_C(0x011370), RUNE_C(0x011374)},
	{RUNE_C(0x011442), RUNE_C(0x011442)},
	{RUNE_C(0x011446), RUNE_C(0x011446)},
	{RUNE_C(0x0114C2), RUNE_C(0x0114C3)},
	{RUNE_C(0x0115BF), RUNE_C(0x0115C0)},
	{RUNE_C(0x01163F), RUNE_C(0x01163F)},
	{RUNE_C(0x0116B6), RUNE_C(0x0116B7)},
	{RUNE_C(0x01172B), RUNE_C(0x01172B)},
	{RUNE_C(0x011839), RUNE_C(0x01183A)},
	{RUNE_C(0x01193D), RUNE_C(0x01193E)},
	{RUNE_C(0x011943), RUNE_C(0x011943)},
	{RUNE_C(0x0119E0), RUNE_C(0x0119E0)},
	{RUNE_C(0x011A34), RUNE_C(0x011A34)},
	{RUNE_C(0x011A47), RUNE_C(0x011A47)},
	{RUNE_C(0x011A99), RUNE_C(0x011A99)},
	{RUNE_C(0x011C3F), RUNE_C(0x011C3F)},
	{RUNE_C(0x011D42), RUNE_C(0x011D42)},
	{RUNE_C(0x011D44), RUNE_C(0x011D45)},
	{RUNE_C(0x011D97), RUNE_C(0x011D97)},
	{RUNE_C(0x013447), RUNE_C(0x013455)},
	{RUNE_C(0x016AF0), RUNE_C(0x016AF4)},
	{RUNE_C(0x016B30), RUNE_C(0x016B36)},
	{RUNE_C(0x016F8F), RUNE_C(0x016F9F)},
	{RUNE_C(0x016FF0), RUNE_C(0x016FF1)},
	{RUNE_C(0x01AFF0), RUNE_C(0x01AFF3)},
	{RUNE_C(0x01AFF5), RUNE_C(0x01AFFB)},
	{RUNE_C(0x01AFFD), RUNE_C(0x01AFFE)},
	{RUNE_C(0x01CF00), RUNE_C(0x01CF2D)},
	{RUNE_C(0x01CF30), RUNE_C(0x01CF46)},
	{RUNE_C(0x01D167), RUNE_C(0x01D169)},
	{RUNE_C(0x01D16D), RUNE_C(0x01D172)},
	{RUNE_C(0x01D17B), RUNE_C(0x01D182)},
	{RUNE_C(0x01D185), RUNE_C(0x01D18B)},
	{RUNE_C(0x01D1AA), RUNE_C(0x01D1AD)},
	{RUNE_C(0x01E030), RUNE_C(0x01E06D)},
	{RUNE_C(0x01E130), RUNE_C(0x01E136)},
	{RUNE_C(0x01E2AE), RUNE_C(0x01E2AE)},
	{RUNE_C(0x01E2EC), RUNE_C(0x01E2EF)},
	{RUNE_C(0x01E8D0), RUNE_C(0x01E8D6)},
	{RUNE_C(0x01E944), RUNE_C(0x01E946)},
	{RUNE_C(0x01E948), RUNE_C(0x01E94A)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_dia(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
