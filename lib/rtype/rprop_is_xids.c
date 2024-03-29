/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x0000000000000000),
	UINT64_C(0x07FFFFFE07FFFFFE),
	UINT64_C(0x0420040000000000),
	UINT64_C(0xFF7FFFFFFF7FFFFF),
};

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x000100), RUNE_C(0x0002C1)},
	{RUNE_C(0x0002C6), RUNE_C(0x0002D1)},
	{RUNE_C(0x0002E0), RUNE_C(0x0002E4)},
	{RUNE_C(0x0002EC), RUNE_C(0x0002EC)},
	{RUNE_C(0x0002EE), RUNE_C(0x0002EE)},
	{RUNE_C(0x000370), RUNE_C(0x000374)},
	{RUNE_C(0x000376), RUNE_C(0x000377)},
	{RUNE_C(0x00037B), RUNE_C(0x00037D)},
	{RUNE_C(0x00037F), RUNE_C(0x00037F)},
	{RUNE_C(0x000386), RUNE_C(0x000386)},
	{RUNE_C(0x000388), RUNE_C(0x00038A)},
	{RUNE_C(0x00038C), RUNE_C(0x00038C)},
	{RUNE_C(0x00038E), RUNE_C(0x0003A1)},
	{RUNE_C(0x0003A3), RUNE_C(0x0003F5)},
	{RUNE_C(0x0003F7), RUNE_C(0x000481)},
	{RUNE_C(0x00048A), RUNE_C(0x00052F)},
	{RUNE_C(0x000531), RUNE_C(0x000556)},
	{RUNE_C(0x000559), RUNE_C(0x000559)},
	{RUNE_C(0x000560), RUNE_C(0x000588)},
	{RUNE_C(0x0005D0), RUNE_C(0x0005EA)},
	{RUNE_C(0x0005EF), RUNE_C(0x0005F2)},
	{RUNE_C(0x000620), RUNE_C(0x00064A)},
	{RUNE_C(0x00066E), RUNE_C(0x00066F)},
	{RUNE_C(0x000671), RUNE_C(0x0006D3)},
	{RUNE_C(0x0006D5), RUNE_C(0x0006D5)},
	{RUNE_C(0x0006E5), RUNE_C(0x0006E6)},
	{RUNE_C(0x0006EE), RUNE_C(0x0006EF)},
	{RUNE_C(0x0006FA), RUNE_C(0x0006FC)},
	{RUNE_C(0x0006FF), RUNE_C(0x0006FF)},
	{RUNE_C(0x000710), RUNE_C(0x000710)},
	{RUNE_C(0x000712), RUNE_C(0x00072F)},
	{RUNE_C(0x00074D), RUNE_C(0x0007A5)},
	{RUNE_C(0x0007B1), RUNE_C(0x0007B1)},
	{RUNE_C(0x0007CA), RUNE_C(0x0007EA)},
	{RUNE_C(0x0007F4), RUNE_C(0x0007F5)},
	{RUNE_C(0x0007FA), RUNE_C(0x0007FA)},
	{RUNE_C(0x000800), RUNE_C(0x000815)},
	{RUNE_C(0x00081A), RUNE_C(0x00081A)},
	{RUNE_C(0x000824), RUNE_C(0x000824)},
	{RUNE_C(0x000828), RUNE_C(0x000828)},
	{RUNE_C(0x000840), RUNE_C(0x000858)},
	{RUNE_C(0x000860), RUNE_C(0x00086A)},
	{RUNE_C(0x000870), RUNE_C(0x000887)},
	{RUNE_C(0x000889), RUNE_C(0x00088E)},
	{RUNE_C(0x0008A0), RUNE_C(0x0008C9)},
	{RUNE_C(0x000904), RUNE_C(0x000939)},
	{RUNE_C(0x00093D), RUNE_C(0x00093D)},
	{RUNE_C(0x000950), RUNE_C(0x000950)},
	{RUNE_C(0x000958), RUNE_C(0x000961)},
	{RUNE_C(0x000971), RUNE_C(0x000980)},
	{RUNE_C(0x000985), RUNE_C(0x00098C)},
	{RUNE_C(0x00098F), RUNE_C(0x000990)},
	{RUNE_C(0x000993), RUNE_C(0x0009A8)},
	{RUNE_C(0x0009AA), RUNE_C(0x0009B0)},
	{RUNE_C(0x0009B2), RUNE_C(0x0009B2)},
	{RUNE_C(0x0009B6), RUNE_C(0x0009B9)},
	{RUNE_C(0x0009BD), RUNE_C(0x0009BD)},
	{RUNE_C(0x0009CE), RUNE_C(0x0009CE)},
	{RUNE_C(0x0009DC), RUNE_C(0x0009DD)},
	{RUNE_C(0x0009DF), RUNE_C(0x0009E1)},
	{RUNE_C(0x0009F0), RUNE_C(0x0009F1)},
	{RUNE_C(0x0009FC), RUNE_C(0x0009FC)},
	{RUNE_C(0x000A05), RUNE_C(0x000A0A)},
	{RUNE_C(0x000A0F), RUNE_C(0x000A10)},
	{RUNE_C(0x000A13), RUNE_C(0x000A28)},
	{RUNE_C(0x000A2A), RUNE_C(0x000A30)},
	{RUNE_C(0x000A32), RUNE_C(0x000A33)},
	{RUNE_C(0x000A35), RUNE_C(0x000A36)},
	{RUNE_C(0x000A38), RUNE_C(0x000A39)},
	{RUNE_C(0x000A59), RUNE_C(0x000A5C)},
	{RUNE_C(0x000A5E), RUNE_C(0x000A5E)},
	{RUNE_C(0x000A72), RUNE_C(0x000A74)},
	{RUNE_C(0x000A85), RUNE_C(0x000A8D)},
	{RUNE_C(0x000A8F), RUNE_C(0x000A91)},
	{RUNE_C(0x000A93), RUNE_C(0x000AA8)},
	{RUNE_C(0x000AAA), RUNE_C(0x000AB0)},
	{RUNE_C(0x000AB2), RUNE_C(0x000AB3)},
	{RUNE_C(0x000AB5), RUNE_C(0x000AB9)},
	{RUNE_C(0x000ABD), RUNE_C(0x000ABD)},
	{RUNE_C(0x000AD0), RUNE_C(0x000AD0)},
	{RUNE_C(0x000AE0), RUNE_C(0x000AE1)},
	{RUNE_C(0x000AF9), RUNE_C(0x000AF9)},
	{RUNE_C(0x000B05), RUNE_C(0x000B0C)},
	{RUNE_C(0x000B0F), RUNE_C(0x000B10)},
	{RUNE_C(0x000B13), RUNE_C(0x000B28)},
	{RUNE_C(0x000B2A), RUNE_C(0x000B30)},
	{RUNE_C(0x000B32), RUNE_C(0x000B33)},
	{RUNE_C(0x000B35), RUNE_C(0x000B39)},
	{RUNE_C(0x000B3D), RUNE_C(0x000B3D)},
	{RUNE_C(0x000B5C), RUNE_C(0x000B5D)},
	{RUNE_C(0x000B5F), RUNE_C(0x000B61)},
	{RUNE_C(0x000B71), RUNE_C(0x000B71)},
	{RUNE_C(0x000B83), RUNE_C(0x000B83)},
	{RUNE_C(0x000B85), RUNE_C(0x000B8A)},
	{RUNE_C(0x000B8E), RUNE_C(0x000B90)},
	{RUNE_C(0x000B92), RUNE_C(0x000B95)},
	{RUNE_C(0x000B99), RUNE_C(0x000B9A)},
	{RUNE_C(0x000B9C), RUNE_C(0x000B9C)},
	{RUNE_C(0x000B9E), RUNE_C(0x000B9F)},
	{RUNE_C(0x000BA3), RUNE_C(0x000BA4)},
	{RUNE_C(0x000BA8), RUNE_C(0x000BAA)},
	{RUNE_C(0x000BAE), RUNE_C(0x000BB9)},
	{RUNE_C(0x000BD0), RUNE_C(0x000BD0)},
	{RUNE_C(0x000C05), RUNE_C(0x000C0C)},
	{RUNE_C(0x000C0E), RUNE_C(0x000C10)},
	{RUNE_C(0x000C12), RUNE_C(0x000C28)},
	{RUNE_C(0x000C2A), RUNE_C(0x000C39)},
	{RUNE_C(0x000C3D), RUNE_C(0x000C3D)},
	{RUNE_C(0x000C58), RUNE_C(0x000C5A)},
	{RUNE_C(0x000C5D), RUNE_C(0x000C5D)},
	{RUNE_C(0x000C60), RUNE_C(0x000C61)},
	{RUNE_C(0x000C80), RUNE_C(0x000C80)},
	{RUNE_C(0x000C85), RUNE_C(0x000C8C)},
	{RUNE_C(0x000C8E), RUNE_C(0x000C90)},
	{RUNE_C(0x000C92), RUNE_C(0x000CA8)},
	{RUNE_C(0x000CAA), RUNE_C(0x000CB3)},
	{RUNE_C(0x000CB5), RUNE_C(0x000CB9)},
	{RUNE_C(0x000CBD), RUNE_C(0x000CBD)},
	{RUNE_C(0x000CDD), RUNE_C(0x000CDE)},
	{RUNE_C(0x000CE0), RUNE_C(0x000CE1)},
	{RUNE_C(0x000CF1), RUNE_C(0x000CF2)},
	{RUNE_C(0x000D04), RUNE_C(0x000D0C)},
	{RUNE_C(0x000D0E), RUNE_C(0x000D10)},
	{RUNE_C(0x000D12), RUNE_C(0x000D3A)},
	{RUNE_C(0x000D3D), RUNE_C(0x000D3D)},
	{RUNE_C(0x000D4E), RUNE_C(0x000D4E)},
	{RUNE_C(0x000D54), RUNE_C(0x000D56)},
	{RUNE_C(0x000D5F), RUNE_C(0x000D61)},
	{RUNE_C(0x000D7A), RUNE_C(0x000D7F)},
	{RUNE_C(0x000D85), RUNE_C(0x000D96)},
	{RUNE_C(0x000D9A), RUNE_C(0x000DB1)},
	{RUNE_C(0x000DB3), RUNE_C(0x000DBB)},
	{RUNE_C(0x000DBD), RUNE_C(0x000DBD)},
	{RUNE_C(0x000DC0), RUNE_C(0x000DC6)},
	{RUNE_C(0x000E01), RUNE_C(0x000E30)},
	{RUNE_C(0x000E32), RUNE_C(0x000E32)},
	{RUNE_C(0x000E40), RUNE_C(0x000E46)},
	{RUNE_C(0x000E81), RUNE_C(0x000E82)},
	{RUNE_C(0x000E84), RUNE_C(0x000E84)},
	{RUNE_C(0x000E86), RUNE_C(0x000E8A)},
	{RUNE_C(0x000E8C), RUNE_C(0x000EA3)},
	{RUNE_C(0x000EA5), RUNE_C(0x000EA5)},
	{RUNE_C(0x000EA7), RUNE_C(0x000EB0)},
	{RUNE_C(0x000EB2), RUNE_C(0x000EB2)},
	{RUNE_C(0x000EBD), RUNE_C(0x000EBD)},
	{RUNE_C(0x000EC0), RUNE_C(0x000EC4)},
	{RUNE_C(0x000EC6), RUNE_C(0x000EC6)},
	{RUNE_C(0x000EDC), RUNE_C(0x000EDF)},
	{RUNE_C(0x000F00), RUNE_C(0x000F00)},
	{RUNE_C(0x000F40), RUNE_C(0x000F47)},
	{RUNE_C(0x000F49), RUNE_C(0x000F6C)},
	{RUNE_C(0x000F88), RUNE_C(0x000F8C)},
	{RUNE_C(0x001000), RUNE_C(0x00102A)},
	{RUNE_C(0x00103F), RUNE_C(0x00103F)},
	{RUNE_C(0x001050), RUNE_C(0x001055)},
	{RUNE_C(0x00105A), RUNE_C(0x00105D)},
	{RUNE_C(0x001061), RUNE_C(0x001061)},
	{RUNE_C(0x001065), RUNE_C(0x001066)},
	{RUNE_C(0x00106E), RUNE_C(0x001070)},
	{RUNE_C(0x001075), RUNE_C(0x001081)},
	{RUNE_C(0x00108E), RUNE_C(0x00108E)},
	{RUNE_C(0x0010A0), RUNE_C(0x0010C5)},
	{RUNE_C(0x0010C7), RUNE_C(0x0010C7)},
	{RUNE_C(0x0010CD), RUNE_C(0x0010CD)},
	{RUNE_C(0x0010D0), RUNE_C(0x0010FA)},
	{RUNE_C(0x0010FC), RUNE_C(0x001248)},
	{RUNE_C(0x00124A), RUNE_C(0x00124D)},
	{RUNE_C(0x001250), RUNE_C(0x001256)},
	{RUNE_C(0x001258), RUNE_C(0x001258)},
	{RUNE_C(0x00125A), RUNE_C(0x00125D)},
	{RUNE_C(0x001260), RUNE_C(0x001288)},
	{RUNE_C(0x00128A), RUNE_C(0x00128D)},
	{RUNE_C(0x001290), RUNE_C(0x0012B0)},
	{RUNE_C(0x0012B2), RUNE_C(0x0012B5)},
	{RUNE_C(0x0012B8), RUNE_C(0x0012BE)},
	{RUNE_C(0x0012C0), RUNE_C(0x0012C0)},
	{RUNE_C(0x0012C2), RUNE_C(0x0012C5)},
	{RUNE_C(0x0012C8), RUNE_C(0x0012D6)},
	{RUNE_C(0x0012D8), RUNE_C(0x001310)},
	{RUNE_C(0x001312), RUNE_C(0x001315)},
	{RUNE_C(0x001318), RUNE_C(0x00135A)},
	{RUNE_C(0x001380), RUNE_C(0x00138F)},
	{RUNE_C(0x0013A0), RUNE_C(0x0013F5)},
	{RUNE_C(0x0013F8), RUNE_C(0x0013FD)},
	{RUNE_C(0x001401), RUNE_C(0x00166C)},
	{RUNE_C(0x00166F), RUNE_C(0x00167F)},
	{RUNE_C(0x001681), RUNE_C(0x00169A)},
	{RUNE_C(0x0016A0), RUNE_C(0x0016EA)},
	{RUNE_C(0x0016EE), RUNE_C(0x0016F8)},
	{RUNE_C(0x001700), RUNE_C(0x001711)},
	{RUNE_C(0x00171F), RUNE_C(0x001731)},
	{RUNE_C(0x001740), RUNE_C(0x001751)},
	{RUNE_C(0x001760), RUNE_C(0x00176C)},
	{RUNE_C(0x00176E), RUNE_C(0x001770)},
	{RUNE_C(0x001780), RUNE_C(0x0017B3)},
	{RUNE_C(0x0017D7), RUNE_C(0x0017D7)},
	{RUNE_C(0x0017DC), RUNE_C(0x0017DC)},
	{RUNE_C(0x001820), RUNE_C(0x001878)},
	{RUNE_C(0x001880), RUNE_C(0x0018A8)},
	{RUNE_C(0x0018AA), RUNE_C(0x0018AA)},
	{RUNE_C(0x0018B0), RUNE_C(0x0018F5)},
	{RUNE_C(0x001900), RUNE_C(0x00191E)},
	{RUNE_C(0x001950), RUNE_C(0x00196D)},
	{RUNE_C(0x001970), RUNE_C(0x001974)},
	{RUNE_C(0x001980), RUNE_C(0x0019AB)},
	{RUNE_C(0x0019B0), RUNE_C(0x0019C9)},
	{RUNE_C(0x001A00), RUNE_C(0x001A16)},
	{RUNE_C(0x001A20), RUNE_C(0x001A54)},
	{RUNE_C(0x001AA7), RUNE_C(0x001AA7)},
	{RUNE_C(0x001B05), RUNE_C(0x001B33)},
	{RUNE_C(0x001B45), RUNE_C(0x001B4C)},
	{RUNE_C(0x001B83), RUNE_C(0x001BA0)},
	{RUNE_C(0x001BAE), RUNE_C(0x001BAF)},
	{RUNE_C(0x001BBA), RUNE_C(0x001BE5)},
	{RUNE_C(0x001C00), RUNE_C(0x001C23)},
	{RUNE_C(0x001C4D), RUNE_C(0x001C4F)},
	{RUNE_C(0x001C5A), RUNE_C(0x001C7D)},
	{RUNE_C(0x001C80), RUNE_C(0x001C88)},
	{RUNE_C(0x001C90), RUNE_C(0x001CBA)},
	{RUNE_C(0x001CBD), RUNE_C(0x001CBF)},
	{RUNE_C(0x001CE9), RUNE_C(0x001CEC)},
	{RUNE_C(0x001CEE), RUNE_C(0x001CF3)},
	{RUNE_C(0x001CF5), RUNE_C(0x001CF6)},
	{RUNE_C(0x001CFA), RUNE_C(0x001CFA)},
	{RUNE_C(0x001D00), RUNE_C(0x001DBF)},
	{RUNE_C(0x001E00), RUNE_C(0x001F15)},
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
	{RUNE_C(0x002071), RUNE_C(0x002071)},
	{RUNE_C(0x00207F), RUNE_C(0x00207F)},
	{RUNE_C(0x002090), RUNE_C(0x00209C)},
	{RUNE_C(0x002102), RUNE_C(0x002102)},
	{RUNE_C(0x002107), RUNE_C(0x002107)},
	{RUNE_C(0x00210A), RUNE_C(0x002113)},
	{RUNE_C(0x002115), RUNE_C(0x002115)},
	{RUNE_C(0x002118), RUNE_C(0x00211D)},
	{RUNE_C(0x002124), RUNE_C(0x002124)},
	{RUNE_C(0x002126), RUNE_C(0x002126)},
	{RUNE_C(0x002128), RUNE_C(0x002128)},
	{RUNE_C(0x00212A), RUNE_C(0x002139)},
	{RUNE_C(0x00213C), RUNE_C(0x00213F)},
	{RUNE_C(0x002145), RUNE_C(0x002149)},
	{RUNE_C(0x00214E), RUNE_C(0x00214E)},
	{RUNE_C(0x002160), RUNE_C(0x002188)},
	{RUNE_C(0x002C00), RUNE_C(0x002CE4)},
	{RUNE_C(0x002CEB), RUNE_C(0x002CEE)},
	{RUNE_C(0x002CF2), RUNE_C(0x002CF3)},
	{RUNE_C(0x002D00), RUNE_C(0x002D25)},
	{RUNE_C(0x002D27), RUNE_C(0x002D27)},
	{RUNE_C(0x002D2D), RUNE_C(0x002D2D)},
	{RUNE_C(0x002D30), RUNE_C(0x002D67)},
	{RUNE_C(0x002D6F), RUNE_C(0x002D6F)},
	{RUNE_C(0x002D80), RUNE_C(0x002D96)},
	{RUNE_C(0x002DA0), RUNE_C(0x002DA6)},
	{RUNE_C(0x002DA8), RUNE_C(0x002DAE)},
	{RUNE_C(0x002DB0), RUNE_C(0x002DB6)},
	{RUNE_C(0x002DB8), RUNE_C(0x002DBE)},
	{RUNE_C(0x002DC0), RUNE_C(0x002DC6)},
	{RUNE_C(0x002DC8), RUNE_C(0x002DCE)},
	{RUNE_C(0x002DD0), RUNE_C(0x002DD6)},
	{RUNE_C(0x002DD8), RUNE_C(0x002DDE)},
	{RUNE_C(0x003005), RUNE_C(0x003007)},
	{RUNE_C(0x003021), RUNE_C(0x003029)},
	{RUNE_C(0x003031), RUNE_C(0x003035)},
	{RUNE_C(0x003038), RUNE_C(0x00303C)},
	{RUNE_C(0x003041), RUNE_C(0x003096)},
	{RUNE_C(0x00309D), RUNE_C(0x00309F)},
	{RUNE_C(0x0030A1), RUNE_C(0x0030FA)},
	{RUNE_C(0x0030FC), RUNE_C(0x0030FF)},
	{RUNE_C(0x003105), RUNE_C(0x00312F)},
	{RUNE_C(0x003131), RUNE_C(0x00318E)},
	{RUNE_C(0x0031A0), RUNE_C(0x0031BF)},
	{RUNE_C(0x0031F0), RUNE_C(0x0031FF)},
	{RUNE_C(0x003400), RUNE_C(0x004DBF)},
	{RUNE_C(0x004E00), RUNE_C(0x00A48C)},
	{RUNE_C(0x00A4D0), RUNE_C(0x00A4FD)},
	{RUNE_C(0x00A500), RUNE_C(0x00A60C)},
	{RUNE_C(0x00A610), RUNE_C(0x00A61F)},
	{RUNE_C(0x00A62A), RUNE_C(0x00A62B)},
	{RUNE_C(0x00A640), RUNE_C(0x00A66E)},
	{RUNE_C(0x00A67F), RUNE_C(0x00A69D)},
	{RUNE_C(0x00A6A0), RUNE_C(0x00A6EF)},
	{RUNE_C(0x00A717), RUNE_C(0x00A71F)},
	{RUNE_C(0x00A722), RUNE_C(0x00A788)},
	{RUNE_C(0x00A78B), RUNE_C(0x00A7CA)},
	{RUNE_C(0x00A7D0), RUNE_C(0x00A7D1)},
	{RUNE_C(0x00A7D3), RUNE_C(0x00A7D3)},
	{RUNE_C(0x00A7D5), RUNE_C(0x00A7D9)},
	{RUNE_C(0x00A7F2), RUNE_C(0x00A801)},
	{RUNE_C(0x00A803), RUNE_C(0x00A805)},
	{RUNE_C(0x00A807), RUNE_C(0x00A80A)},
	{RUNE_C(0x00A80C), RUNE_C(0x00A822)},
	{RUNE_C(0x00A840), RUNE_C(0x00A873)},
	{RUNE_C(0x00A882), RUNE_C(0x00A8B3)},
	{RUNE_C(0x00A8F2), RUNE_C(0x00A8F7)},
	{RUNE_C(0x00A8FB), RUNE_C(0x00A8FB)},
	{RUNE_C(0x00A8FD), RUNE_C(0x00A8FE)},
	{RUNE_C(0x00A90A), RUNE_C(0x00A925)},
	{RUNE_C(0x00A930), RUNE_C(0x00A946)},
	{RUNE_C(0x00A960), RUNE_C(0x00A97C)},
	{RUNE_C(0x00A984), RUNE_C(0x00A9B2)},
	{RUNE_C(0x00A9CF), RUNE_C(0x00A9CF)},
	{RUNE_C(0x00A9E0), RUNE_C(0x00A9E4)},
	{RUNE_C(0x00A9E6), RUNE_C(0x00A9EF)},
	{RUNE_C(0x00A9FA), RUNE_C(0x00A9FE)},
	{RUNE_C(0x00AA00), RUNE_C(0x00AA28)},
	{RUNE_C(0x00AA40), RUNE_C(0x00AA42)},
	{RUNE_C(0x00AA44), RUNE_C(0x00AA4B)},
	{RUNE_C(0x00AA60), RUNE_C(0x00AA76)},
	{RUNE_C(0x00AA7A), RUNE_C(0x00AA7A)},
	{RUNE_C(0x00AA7E), RUNE_C(0x00AAAF)},
	{RUNE_C(0x00AAB1), RUNE_C(0x00AAB1)},
	{RUNE_C(0x00AAB5), RUNE_C(0x00AAB6)},
	{RUNE_C(0x00AAB9), RUNE_C(0x00AABD)},
	{RUNE_C(0x00AAC0), RUNE_C(0x00AAC0)},
	{RUNE_C(0x00AAC2), RUNE_C(0x00AAC2)},
	{RUNE_C(0x00AADB), RUNE_C(0x00AADD)},
	{RUNE_C(0x00AAE0), RUNE_C(0x00AAEA)},
	{RUNE_C(0x00AAF2), RUNE_C(0x00AAF4)},
	{RUNE_C(0x00AB01), RUNE_C(0x00AB06)},
	{RUNE_C(0x00AB09), RUNE_C(0x00AB0E)},
	{RUNE_C(0x00AB11), RUNE_C(0x00AB16)},
	{RUNE_C(0x00AB20), RUNE_C(0x00AB26)},
	{RUNE_C(0x00AB28), RUNE_C(0x00AB2E)},
	{RUNE_C(0x00AB30), RUNE_C(0x00AB5A)},
	{RUNE_C(0x00AB5C), RUNE_C(0x00AB69)},
	{RUNE_C(0x00AB70), RUNE_C(0x00ABE2)},
	{RUNE_C(0x00AC00), RUNE_C(0x00D7A3)},
	{RUNE_C(0x00D7B0), RUNE_C(0x00D7C6)},
	{RUNE_C(0x00D7CB), RUNE_C(0x00D7FB)},
	{RUNE_C(0x00F900), RUNE_C(0x00FA6D)},
	{RUNE_C(0x00FA70), RUNE_C(0x00FAD9)},
	{RUNE_C(0x00FB00), RUNE_C(0x00FB06)},
	{RUNE_C(0x00FB13), RUNE_C(0x00FB17)},
	{RUNE_C(0x00FB1D), RUNE_C(0x00FB1D)},
	{RUNE_C(0x00FB1F), RUNE_C(0x00FB28)},
	{RUNE_C(0x00FB2A), RUNE_C(0x00FB36)},
	{RUNE_C(0x00FB38), RUNE_C(0x00FB3C)},
	{RUNE_C(0x00FB3E), RUNE_C(0x00FB3E)},
	{RUNE_C(0x00FB40), RUNE_C(0x00FB41)},
	{RUNE_C(0x00FB43), RUNE_C(0x00FB44)},
	{RUNE_C(0x00FB46), RUNE_C(0x00FBB1)},
	{RUNE_C(0x00FBD3), RUNE_C(0x00FC5D)},
	{RUNE_C(0x00FC64), RUNE_C(0x00FD3D)},
	{RUNE_C(0x00FD50), RUNE_C(0x00FD8F)},
	{RUNE_C(0x00FD92), RUNE_C(0x00FDC7)},
	{RUNE_C(0x00FDF0), RUNE_C(0x00FDF9)},
	{RUNE_C(0x00FE71), RUNE_C(0x00FE71)},
	{RUNE_C(0x00FE73), RUNE_C(0x00FE73)},
	{RUNE_C(0x00FE77), RUNE_C(0x00FE77)},
	{RUNE_C(0x00FE79), RUNE_C(0x00FE79)},
	{RUNE_C(0x00FE7B), RUNE_C(0x00FE7B)},
	{RUNE_C(0x00FE7D), RUNE_C(0x00FE7D)},
	{RUNE_C(0x00FE7F), RUNE_C(0x00FEFC)},
	{RUNE_C(0x00FF21), RUNE_C(0x00FF3A)},
	{RUNE_C(0x00FF41), RUNE_C(0x00FF5A)},
	{RUNE_C(0x00FF66), RUNE_C(0x00FF9D)},
	{RUNE_C(0x00FFA0), RUNE_C(0x00FFBE)},
	{RUNE_C(0x00FFC2), RUNE_C(0x00FFC7)},
	{RUNE_C(0x00FFCA), RUNE_C(0x00FFCF)},
	{RUNE_C(0x00FFD2), RUNE_C(0x00FFD7)},
	{RUNE_C(0x00FFDA), RUNE_C(0x00FFDC)},
	{RUNE_C(0x010000), RUNE_C(0x01000B)},
	{RUNE_C(0x01000D), RUNE_C(0x010026)},
	{RUNE_C(0x010028), RUNE_C(0x01003A)},
	{RUNE_C(0x01003C), RUNE_C(0x01003D)},
	{RUNE_C(0x01003F), RUNE_C(0x01004D)},
	{RUNE_C(0x010050), RUNE_C(0x01005D)},
	{RUNE_C(0x010080), RUNE_C(0x0100FA)},
	{RUNE_C(0x010140), RUNE_C(0x010174)},
	{RUNE_C(0x010280), RUNE_C(0x01029C)},
	{RUNE_C(0x0102A0), RUNE_C(0x0102D0)},
	{RUNE_C(0x010300), RUNE_C(0x01031F)},
	{RUNE_C(0x01032D), RUNE_C(0x01034A)},
	{RUNE_C(0x010350), RUNE_C(0x010375)},
	{RUNE_C(0x010380), RUNE_C(0x01039D)},
	{RUNE_C(0x0103A0), RUNE_C(0x0103C3)},
	{RUNE_C(0x0103C8), RUNE_C(0x0103CF)},
	{RUNE_C(0x0103D1), RUNE_C(0x0103D5)},
	{RUNE_C(0x010400), RUNE_C(0x01049D)},
	{RUNE_C(0x0104B0), RUNE_C(0x0104D3)},
	{RUNE_C(0x0104D8), RUNE_C(0x0104FB)},
	{RUNE_C(0x010500), RUNE_C(0x010527)},
	{RUNE_C(0x010530), RUNE_C(0x010563)},
	{RUNE_C(0x010570), RUNE_C(0x01057A)},
	{RUNE_C(0x01057C), RUNE_C(0x01058A)},
	{RUNE_C(0x01058C), RUNE_C(0x010592)},
	{RUNE_C(0x010594), RUNE_C(0x010595)},
	{RUNE_C(0x010597), RUNE_C(0x0105A1)},
	{RUNE_C(0x0105A3), RUNE_C(0x0105B1)},
	{RUNE_C(0x0105B3), RUNE_C(0x0105B9)},
	{RUNE_C(0x0105BB), RUNE_C(0x0105BC)},
	{RUNE_C(0x010600), RUNE_C(0x010736)},
	{RUNE_C(0x010740), RUNE_C(0x010755)},
	{RUNE_C(0x010760), RUNE_C(0x010767)},
	{RUNE_C(0x010780), RUNE_C(0x010785)},
	{RUNE_C(0x010787), RUNE_C(0x0107B0)},
	{RUNE_C(0x0107B2), RUNE_C(0x0107BA)},
	{RUNE_C(0x010800), RUNE_C(0x010805)},
	{RUNE_C(0x010808), RUNE_C(0x010808)},
	{RUNE_C(0x01080A), RUNE_C(0x010835)},
	{RUNE_C(0x010837), RUNE_C(0x010838)},
	{RUNE_C(0x01083C), RUNE_C(0x01083C)},
	{RUNE_C(0x01083F), RUNE_C(0x010855)},
	{RUNE_C(0x010860), RUNE_C(0x010876)},
	{RUNE_C(0x010880), RUNE_C(0x01089E)},
	{RUNE_C(0x0108E0), RUNE_C(0x0108F2)},
	{RUNE_C(0x0108F4), RUNE_C(0x0108F5)},
	{RUNE_C(0x010900), RUNE_C(0x010915)},
	{RUNE_C(0x010920), RUNE_C(0x010939)},
	{RUNE_C(0x010980), RUNE_C(0x0109B7)},
	{RUNE_C(0x0109BE), RUNE_C(0x0109BF)},
	{RUNE_C(0x010A00), RUNE_C(0x010A00)},
	{RUNE_C(0x010A10), RUNE_C(0x010A13)},
	{RUNE_C(0x010A15), RUNE_C(0x010A17)},
	{RUNE_C(0x010A19), RUNE_C(0x010A35)},
	{RUNE_C(0x010A60), RUNE_C(0x010A7C)},
	{RUNE_C(0x010A80), RUNE_C(0x010A9C)},
	{RUNE_C(0x010AC0), RUNE_C(0x010AC7)},
	{RUNE_C(0x010AC9), RUNE_C(0x010AE4)},
	{RUNE_C(0x010B00), RUNE_C(0x010B35)},
	{RUNE_C(0x010B40), RUNE_C(0x010B55)},
	{RUNE_C(0x010B60), RUNE_C(0x010B72)},
	{RUNE_C(0x010B80), RUNE_C(0x010B91)},
	{RUNE_C(0x010C00), RUNE_C(0x010C48)},
	{RUNE_C(0x010C80), RUNE_C(0x010CB2)},
	{RUNE_C(0x010CC0), RUNE_C(0x010CF2)},
	{RUNE_C(0x010D00), RUNE_C(0x010D23)},
	{RUNE_C(0x010E80), RUNE_C(0x010EA9)},
	{RUNE_C(0x010EB0), RUNE_C(0x010EB1)},
	{RUNE_C(0x010F00), RUNE_C(0x010F1C)},
	{RUNE_C(0x010F27), RUNE_C(0x010F27)},
	{RUNE_C(0x010F30), RUNE_C(0x010F45)},
	{RUNE_C(0x010F70), RUNE_C(0x010F81)},
	{RUNE_C(0x010FB0), RUNE_C(0x010FC4)},
	{RUNE_C(0x010FE0), RUNE_C(0x010FF6)},
	{RUNE_C(0x011003), RUNE_C(0x011037)},
	{RUNE_C(0x011071), RUNE_C(0x011072)},
	{RUNE_C(0x011075), RUNE_C(0x011075)},
	{RUNE_C(0x011083), RUNE_C(0x0110AF)},
	{RUNE_C(0x0110D0), RUNE_C(0x0110E8)},
	{RUNE_C(0x011103), RUNE_C(0x011126)},
	{RUNE_C(0x011144), RUNE_C(0x011144)},
	{RUNE_C(0x011147), RUNE_C(0x011147)},
	{RUNE_C(0x011150), RUNE_C(0x011172)},
	{RUNE_C(0x011176), RUNE_C(0x011176)},
	{RUNE_C(0x011183), RUNE_C(0x0111B2)},
	{RUNE_C(0x0111C1), RUNE_C(0x0111C4)},
	{RUNE_C(0x0111DA), RUNE_C(0x0111DA)},
	{RUNE_C(0x0111DC), RUNE_C(0x0111DC)},
	{RUNE_C(0x011200), RUNE_C(0x011211)},
	{RUNE_C(0x011213), RUNE_C(0x01122B)},
	{RUNE_C(0x01123F), RUNE_C(0x011240)},
	{RUNE_C(0x011280), RUNE_C(0x011286)},
	{RUNE_C(0x011288), RUNE_C(0x011288)},
	{RUNE_C(0x01128A), RUNE_C(0x01128D)},
	{RUNE_C(0x01128F), RUNE_C(0x01129D)},
	{RUNE_C(0x01129F), RUNE_C(0x0112A8)},
	{RUNE_C(0x0112B0), RUNE_C(0x0112DE)},
	{RUNE_C(0x011305), RUNE_C(0x01130C)},
	{RUNE_C(0x01130F), RUNE_C(0x011310)},
	{RUNE_C(0x011313), RUNE_C(0x011328)},
	{RUNE_C(0x01132A), RUNE_C(0x011330)},
	{RUNE_C(0x011332), RUNE_C(0x011333)},
	{RUNE_C(0x011335), RUNE_C(0x011339)},
	{RUNE_C(0x01133D), RUNE_C(0x01133D)},
	{RUNE_C(0x011350), RUNE_C(0x011350)},
	{RUNE_C(0x01135D), RUNE_C(0x011361)},
	{RUNE_C(0x011400), RUNE_C(0x011434)},
	{RUNE_C(0x011447), RUNE_C(0x01144A)},
	{RUNE_C(0x01145F), RUNE_C(0x011461)},
	{RUNE_C(0x011480), RUNE_C(0x0114AF)},
	{RUNE_C(0x0114C4), RUNE_C(0x0114C5)},
	{RUNE_C(0x0114C7), RUNE_C(0x0114C7)},
	{RUNE_C(0x011580), RUNE_C(0x0115AE)},
	{RUNE_C(0x0115D8), RUNE_C(0x0115DB)},
	{RUNE_C(0x011600), RUNE_C(0x01162F)},
	{RUNE_C(0x011644), RUNE_C(0x011644)},
	{RUNE_C(0x011680), RUNE_C(0x0116AA)},
	{RUNE_C(0x0116B8), RUNE_C(0x0116B8)},
	{RUNE_C(0x011700), RUNE_C(0x01171A)},
	{RUNE_C(0x011740), RUNE_C(0x011746)},
	{RUNE_C(0x011800), RUNE_C(0x01182B)},
	{RUNE_C(0x0118A0), RUNE_C(0x0118DF)},
	{RUNE_C(0x0118FF), RUNE_C(0x011906)},
	{RUNE_C(0x011909), RUNE_C(0x011909)},
	{RUNE_C(0x01190C), RUNE_C(0x011913)},
	{RUNE_C(0x011915), RUNE_C(0x011916)},
	{RUNE_C(0x011918), RUNE_C(0x01192F)},
	{RUNE_C(0x01193F), RUNE_C(0x01193F)},
	{RUNE_C(0x011941), RUNE_C(0x011941)},
	{RUNE_C(0x0119A0), RUNE_C(0x0119A7)},
	{RUNE_C(0x0119AA), RUNE_C(0x0119D0)},
	{RUNE_C(0x0119E1), RUNE_C(0x0119E1)},
	{RUNE_C(0x0119E3), RUNE_C(0x0119E3)},
	{RUNE_C(0x011A00), RUNE_C(0x011A00)},
	{RUNE_C(0x011A0B), RUNE_C(0x011A32)},
	{RUNE_C(0x011A3A), RUNE_C(0x011A3A)},
	{RUNE_C(0x011A50), RUNE_C(0x011A50)},
	{RUNE_C(0x011A5C), RUNE_C(0x011A89)},
	{RUNE_C(0x011A9D), RUNE_C(0x011A9D)},
	{RUNE_C(0x011AB0), RUNE_C(0x011AF8)},
	{RUNE_C(0x011C00), RUNE_C(0x011C08)},
	{RUNE_C(0x011C0A), RUNE_C(0x011C2E)},
	{RUNE_C(0x011C40), RUNE_C(0x011C40)},
	{RUNE_C(0x011C72), RUNE_C(0x011C8F)},
	{RUNE_C(0x011D00), RUNE_C(0x011D06)},
	{RUNE_C(0x011D08), RUNE_C(0x011D09)},
	{RUNE_C(0x011D0B), RUNE_C(0x011D30)},
	{RUNE_C(0x011D46), RUNE_C(0x011D46)},
	{RUNE_C(0x011D60), RUNE_C(0x011D65)},
	{RUNE_C(0x011D67), RUNE_C(0x011D68)},
	{RUNE_C(0x011D6A), RUNE_C(0x011D89)},
	{RUNE_C(0x011D98), RUNE_C(0x011D98)},
	{RUNE_C(0x011EE0), RUNE_C(0x011EF2)},
	{RUNE_C(0x011F02), RUNE_C(0x011F02)},
	{RUNE_C(0x011F04), RUNE_C(0x011F10)},
	{RUNE_C(0x011F12), RUNE_C(0x011F33)},
	{RUNE_C(0x011FB0), RUNE_C(0x011FB0)},
	{RUNE_C(0x012000), RUNE_C(0x012399)},
	{RUNE_C(0x012400), RUNE_C(0x01246E)},
	{RUNE_C(0x012480), RUNE_C(0x012543)},
	{RUNE_C(0x012F90), RUNE_C(0x012FF0)},
	{RUNE_C(0x013000), RUNE_C(0x01342F)},
	{RUNE_C(0x013441), RUNE_C(0x013446)},
	{RUNE_C(0x014400), RUNE_C(0x014646)},
	{RUNE_C(0x016800), RUNE_C(0x016A38)},
	{RUNE_C(0x016A40), RUNE_C(0x016A5E)},
	{RUNE_C(0x016A70), RUNE_C(0x016ABE)},
	{RUNE_C(0x016AD0), RUNE_C(0x016AED)},
	{RUNE_C(0x016B00), RUNE_C(0x016B2F)},
	{RUNE_C(0x016B40), RUNE_C(0x016B43)},
	{RUNE_C(0x016B63), RUNE_C(0x016B77)},
	{RUNE_C(0x016B7D), RUNE_C(0x016B8F)},
	{RUNE_C(0x016E40), RUNE_C(0x016E7F)},
	{RUNE_C(0x016F00), RUNE_C(0x016F4A)},
	{RUNE_C(0x016F50), RUNE_C(0x016F50)},
	{RUNE_C(0x016F93), RUNE_C(0x016F9F)},
	{RUNE_C(0x016FE0), RUNE_C(0x016FE1)},
	{RUNE_C(0x016FE3), RUNE_C(0x016FE3)},
	{RUNE_C(0x017000), RUNE_C(0x0187F7)},
	{RUNE_C(0x018800), RUNE_C(0x018CD5)},
	{RUNE_C(0x018D00), RUNE_C(0x018D08)},
	{RUNE_C(0x01AFF0), RUNE_C(0x01AFF3)},
	{RUNE_C(0x01AFF5), RUNE_C(0x01AFFB)},
	{RUNE_C(0x01AFFD), RUNE_C(0x01AFFE)},
	{RUNE_C(0x01B000), RUNE_C(0x01B122)},
	{RUNE_C(0x01B132), RUNE_C(0x01B132)},
	{RUNE_C(0x01B150), RUNE_C(0x01B152)},
	{RUNE_C(0x01B155), RUNE_C(0x01B155)},
	{RUNE_C(0x01B164), RUNE_C(0x01B167)},
	{RUNE_C(0x01B170), RUNE_C(0x01B2FB)},
	{RUNE_C(0x01BC00), RUNE_C(0x01BC6A)},
	{RUNE_C(0x01BC70), RUNE_C(0x01BC7C)},
	{RUNE_C(0x01BC80), RUNE_C(0x01BC88)},
	{RUNE_C(0x01BC90), RUNE_C(0x01BC99)},
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
	{RUNE_C(0x01D6A8), RUNE_C(0x01D6C0)},
	{RUNE_C(0x01D6C2), RUNE_C(0x01D6DA)},
	{RUNE_C(0x01D6DC), RUNE_C(0x01D6FA)},
	{RUNE_C(0x01D6FC), RUNE_C(0x01D714)},
	{RUNE_C(0x01D716), RUNE_C(0x01D734)},
	{RUNE_C(0x01D736), RUNE_C(0x01D74E)},
	{RUNE_C(0x01D750), RUNE_C(0x01D76E)},
	{RUNE_C(0x01D770), RUNE_C(0x01D788)},
	{RUNE_C(0x01D78A), RUNE_C(0x01D7A8)},
	{RUNE_C(0x01D7AA), RUNE_C(0x01D7C2)},
	{RUNE_C(0x01D7C4), RUNE_C(0x01D7CB)},
	{RUNE_C(0x01DF00), RUNE_C(0x01DF1E)},
	{RUNE_C(0x01DF25), RUNE_C(0x01DF2A)},
	{RUNE_C(0x01E030), RUNE_C(0x01E06D)},
	{RUNE_C(0x01E100), RUNE_C(0x01E12C)},
	{RUNE_C(0x01E137), RUNE_C(0x01E13D)},
	{RUNE_C(0x01E14E), RUNE_C(0x01E14E)},
	{RUNE_C(0x01E290), RUNE_C(0x01E2AD)},
	{RUNE_C(0x01E2C0), RUNE_C(0x01E2EB)},
	{RUNE_C(0x01E4D0), RUNE_C(0x01E4EB)},
	{RUNE_C(0x01E7E0), RUNE_C(0x01E7E6)},
	{RUNE_C(0x01E7E8), RUNE_C(0x01E7EB)},
	{RUNE_C(0x01E7ED), RUNE_C(0x01E7EE)},
	{RUNE_C(0x01E7F0), RUNE_C(0x01E7FE)},
	{RUNE_C(0x01E800), RUNE_C(0x01E8C4)},
	{RUNE_C(0x01E900), RUNE_C(0x01E943)},
	{RUNE_C(0x01E94B), RUNE_C(0x01E94B)},
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
	{RUNE_C(0x020000), RUNE_C(0x02A6DF)},
	{RUNE_C(0x02A700), RUNE_C(0x02B739)},
	{RUNE_C(0x02B740), RUNE_C(0x02B81D)},
	{RUNE_C(0x02B820), RUNE_C(0x02CEA1)},
	{RUNE_C(0x02CEB0), RUNE_C(0x02EBE0)},
	{RUNE_C(0x02EBF0), RUNE_C(0x02EE5D)},
	{RUNE_C(0x02F800), RUNE_C(0x02FA1D)},
	{RUNE_C(0x030000), RUNE_C(0x03134A)},
	{RUNE_C(0x031350), RUNE_C(0x0323AF)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_xids(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
