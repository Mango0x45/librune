/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask =
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
	{0x0000F8, 0x0002C1},
	{0x0002C6, 0x0002D1},
	{0x0002E0, 0x0002E4},
	{0x0002EC, 0x0002EC},
	{0x0002EE, 0x0002EE},
	{0x000370, 0x000374},
	{0x000376, 0x000377},
	{0x00037B, 0x00037D},
	{0x00037F, 0x00037F},
	{0x000386, 0x000386},
	{0x000388, 0x00038A},
	{0x00038C, 0x00038C},
	{0x00038E, 0x0003A1},
	{0x0003A3, 0x0003F5},
	{0x0003F7, 0x000481},
	{0x00048A, 0x00052F},
	{0x000531, 0x000556},
	{0x000559, 0x000559},
	{0x000560, 0x000588},
	{0x0005D0, 0x0005EA},
	{0x0005EF, 0x0005F2},
	{0x000620, 0x00064A},
	{0x00066E, 0x00066F},
	{0x000671, 0x0006D3},
	{0x0006D5, 0x0006D5},
	{0x0006E5, 0x0006E6},
	{0x0006EE, 0x0006EF},
	{0x0006FA, 0x0006FC},
	{0x0006FF, 0x0006FF},
	{0x000710, 0x000710},
	{0x000712, 0x00072F},
	{0x00074D, 0x0007A5},
	{0x0007B1, 0x0007B1},
	{0x0007CA, 0x0007EA},
	{0x0007F4, 0x0007F5},
	{0x0007FA, 0x0007FA},
	{0x000800, 0x000815},
	{0x00081A, 0x00081A},
	{0x000824, 0x000824},
	{0x000828, 0x000828},
	{0x000840, 0x000858},
	{0x000860, 0x00086A},
	{0x000870, 0x000887},
	{0x000889, 0x00088E},
	{0x0008A0, 0x0008C9},
	{0x000904, 0x000939},
	{0x00093D, 0x00093D},
	{0x000950, 0x000950},
	{0x000958, 0x000961},
	{0x000971, 0x000980},
	{0x000985, 0x00098C},
	{0x00098F, 0x000990},
	{0x000993, 0x0009A8},
	{0x0009AA, 0x0009B0},
	{0x0009B2, 0x0009B2},
	{0x0009B6, 0x0009B9},
	{0x0009BD, 0x0009BD},
	{0x0009CE, 0x0009CE},
	{0x0009DC, 0x0009DD},
	{0x0009DF, 0x0009E1},
	{0x0009F0, 0x0009F1},
	{0x0009FC, 0x0009FC},
	{0x000A05, 0x000A0A},
	{0x000A0F, 0x000A10},
	{0x000A13, 0x000A28},
	{0x000A2A, 0x000A30},
	{0x000A32, 0x000A33},
	{0x000A35, 0x000A36},
	{0x000A38, 0x000A39},
	{0x000A59, 0x000A5C},
	{0x000A5E, 0x000A5E},
	{0x000A72, 0x000A74},
	{0x000A85, 0x000A8D},
	{0x000A8F, 0x000A91},
	{0x000A93, 0x000AA8},
	{0x000AAA, 0x000AB0},
	{0x000AB2, 0x000AB3},
	{0x000AB5, 0x000AB9},
	{0x000ABD, 0x000ABD},
	{0x000AD0, 0x000AD0},
	{0x000AE0, 0x000AE1},
	{0x000AF9, 0x000AF9},
	{0x000B05, 0x000B0C},
	{0x000B0F, 0x000B10},
	{0x000B13, 0x000B28},
	{0x000B2A, 0x000B30},
	{0x000B32, 0x000B33},
	{0x000B35, 0x000B39},
	{0x000B3D, 0x000B3D},
	{0x000B5C, 0x000B5D},
	{0x000B5F, 0x000B61},
	{0x000B71, 0x000B71},
	{0x000B83, 0x000B83},
	{0x000B85, 0x000B8A},
	{0x000B8E, 0x000B90},
	{0x000B92, 0x000B95},
	{0x000B99, 0x000B9A},
	{0x000B9C, 0x000B9C},
	{0x000B9E, 0x000B9F},
	{0x000BA3, 0x000BA4},
	{0x000BA8, 0x000BAA},
	{0x000BAE, 0x000BB9},
	{0x000BD0, 0x000BD0},
	{0x000C05, 0x000C0C},
	{0x000C0E, 0x000C10},
	{0x000C12, 0x000C28},
	{0x000C2A, 0x000C39},
	{0x000C3D, 0x000C3D},
	{0x000C58, 0x000C5A},
	{0x000C5D, 0x000C5D},
	{0x000C60, 0x000C61},
	{0x000C80, 0x000C80},
	{0x000C85, 0x000C8C},
	{0x000C8E, 0x000C90},
	{0x000C92, 0x000CA8},
	{0x000CAA, 0x000CB3},
	{0x000CB5, 0x000CB9},
	{0x000CBD, 0x000CBD},
	{0x000CDD, 0x000CDE},
	{0x000CE0, 0x000CE1},
	{0x000CF1, 0x000CF2},
	{0x000D04, 0x000D0C},
	{0x000D0E, 0x000D10},
	{0x000D12, 0x000D3A},
	{0x000D3D, 0x000D3D},
	{0x000D4E, 0x000D4E},
	{0x000D54, 0x000D56},
	{0x000D5F, 0x000D61},
	{0x000D7A, 0x000D7F},
	{0x000D85, 0x000D96},
	{0x000D9A, 0x000DB1},
	{0x000DB3, 0x000DBB},
	{0x000DBD, 0x000DBD},
	{0x000DC0, 0x000DC6},
	{0x000E01, 0x000E30},
	{0x000E32, 0x000E32},
	{0x000E40, 0x000E46},
	{0x000E81, 0x000E82},
	{0x000E84, 0x000E84},
	{0x000E86, 0x000E8A},
	{0x000E8C, 0x000EA3},
	{0x000EA5, 0x000EA5},
	{0x000EA7, 0x000EB0},
	{0x000EB2, 0x000EB2},
	{0x000EBD, 0x000EBD},
	{0x000EC0, 0x000EC4},
	{0x000EC6, 0x000EC6},
	{0x000EDC, 0x000EDF},
	{0x000F00, 0x000F00},
	{0x000F40, 0x000F47},
	{0x000F49, 0x000F6C},
	{0x000F88, 0x000F8C},
	{0x001000, 0x00102A},
	{0x00103F, 0x00103F},
	{0x001050, 0x001055},
	{0x00105A, 0x00105D},
	{0x001061, 0x001061},
	{0x001065, 0x001066},
	{0x00106E, 0x001070},
	{0x001075, 0x001081},
	{0x00108E, 0x00108E},
	{0x0010A0, 0x0010C5},
	{0x0010C7, 0x0010C7},
	{0x0010CD, 0x0010CD},
	{0x0010D0, 0x0010FA},
	{0x0010FC, 0x001248},
	{0x00124A, 0x00124D},
	{0x001250, 0x001256},
	{0x001258, 0x001258},
	{0x00125A, 0x00125D},
	{0x001260, 0x001288},
	{0x00128A, 0x00128D},
	{0x001290, 0x0012B0},
	{0x0012B2, 0x0012B5},
	{0x0012B8, 0x0012BE},
	{0x0012C0, 0x0012C0},
	{0x0012C2, 0x0012C5},
	{0x0012C8, 0x0012D6},
	{0x0012D8, 0x001310},
	{0x001312, 0x001315},
	{0x001318, 0x00135A},
	{0x001380, 0x00138F},
	{0x0013A0, 0x0013F5},
	{0x0013F8, 0x0013FD},
	{0x001401, 0x00166C},
	{0x00166F, 0x00167F},
	{0x001681, 0x00169A},
	{0x0016A0, 0x0016EA},
	{0x0016EE, 0x0016F8},
	{0x001700, 0x001711},
	{0x00171F, 0x001731},
	{0x001740, 0x001751},
	{0x001760, 0x00176C},
	{0x00176E, 0x001770},
	{0x001780, 0x0017B3},
	{0x0017D7, 0x0017D7},
	{0x0017DC, 0x0017DC},
	{0x001820, 0x001878},
	{0x001880, 0x0018A8},
	{0x0018AA, 0x0018AA},
	{0x0018B0, 0x0018F5},
	{0x001900, 0x00191E},
	{0x001950, 0x00196D},
	{0x001970, 0x001974},
	{0x001980, 0x0019AB},
	{0x0019B0, 0x0019C9},
	{0x001A00, 0x001A16},
	{0x001A20, 0x001A54},
	{0x001AA7, 0x001AA7},
	{0x001B05, 0x001B33},
	{0x001B45, 0x001B4C},
	{0x001B83, 0x001BA0},
	{0x001BAE, 0x001BAF},
	{0x001BBA, 0x001BE5},
	{0x001C00, 0x001C23},
	{0x001C4D, 0x001C4F},
	{0x001C5A, 0x001C7D},
	{0x001C80, 0x001C88},
	{0x001C90, 0x001CBA},
	{0x001CBD, 0x001CBF},
	{0x001CE9, 0x001CEC},
	{0x001CEE, 0x001CF3},
	{0x001CF5, 0x001CF6},
	{0x001CFA, 0x001CFA},
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
	{0x002118, 0x00211D},
	{0x002124, 0x002124},
	{0x002126, 0x002126},
	{0x002128, 0x002128},
	{0x00212A, 0x002139},
	{0x00213C, 0x00213F},
	{0x002145, 0x002149},
	{0x00214E, 0x00214E},
	{0x002160, 0x002188},
	{0x002C00, 0x002CE4},
	{0x002CEB, 0x002CEE},
	{0x002CF2, 0x002CF3},
	{0x002D00, 0x002D25},
	{0x002D27, 0x002D27},
	{0x002D2D, 0x002D2D},
	{0x002D30, 0x002D67},
	{0x002D6F, 0x002D6F},
	{0x002D80, 0x002D96},
	{0x002DA0, 0x002DA6},
	{0x002DA8, 0x002DAE},
	{0x002DB0, 0x002DB6},
	{0x002DB8, 0x002DBE},
	{0x002DC0, 0x002DC6},
	{0x002DC8, 0x002DCE},
	{0x002DD0, 0x002DD6},
	{0x002DD8, 0x002DDE},
	{0x003005, 0x003007},
	{0x003021, 0x003029},
	{0x003031, 0x003035},
	{0x003038, 0x00303C},
	{0x003041, 0x003096},
	{0x00309D, 0x00309F},
	{0x0030A1, 0x0030FA},
	{0x0030FC, 0x0030FF},
	{0x003105, 0x00312F},
	{0x003131, 0x00318E},
	{0x0031A0, 0x0031BF},
	{0x0031F0, 0x0031FF},
	{0x003400, 0x004DBF},
	{0x004E00, 0x00A48C},
	{0x00A4D0, 0x00A4FD},
	{0x00A500, 0x00A60C},
	{0x00A610, 0x00A61F},
	{0x00A62A, 0x00A62B},
	{0x00A640, 0x00A66E},
	{0x00A67F, 0x00A69D},
	{0x00A6A0, 0x00A6EF},
	{0x00A717, 0x00A71F},
	{0x00A722, 0x00A788},
	{0x00A78B, 0x00A7CA},
	{0x00A7D0, 0x00A7D1},
	{0x00A7D3, 0x00A7D3},
	{0x00A7D5, 0x00A7D9},
	{0x00A7F2, 0x00A801},
	{0x00A803, 0x00A805},
	{0x00A807, 0x00A80A},
	{0x00A80C, 0x00A822},
	{0x00A840, 0x00A873},
	{0x00A882, 0x00A8B3},
	{0x00A8F2, 0x00A8F7},
	{0x00A8FB, 0x00A8FB},
	{0x00A8FD, 0x00A8FE},
	{0x00A90A, 0x00A925},
	{0x00A930, 0x00A946},
	{0x00A960, 0x00A97C},
	{0x00A984, 0x00A9B2},
	{0x00A9CF, 0x00A9CF},
	{0x00A9E0, 0x00A9E4},
	{0x00A9E6, 0x00A9EF},
	{0x00A9FA, 0x00A9FE},
	{0x00AA00, 0x00AA28},
	{0x00AA40, 0x00AA42},
	{0x00AA44, 0x00AA4B},
	{0x00AA60, 0x00AA76},
	{0x00AA7A, 0x00AA7A},
	{0x00AA7E, 0x00AAAF},
	{0x00AAB1, 0x00AAB1},
	{0x00AAB5, 0x00AAB6},
	{0x00AAB9, 0x00AABD},
	{0x00AAC0, 0x00AAC0},
	{0x00AAC2, 0x00AAC2},
	{0x00AADB, 0x00AADD},
	{0x00AAE0, 0x00AAEA},
	{0x00AAF2, 0x00AAF4},
	{0x00AB01, 0x00AB06},
	{0x00AB09, 0x00AB0E},
	{0x00AB11, 0x00AB16},
	{0x00AB20, 0x00AB26},
	{0x00AB28, 0x00AB2E},
	{0x00AB30, 0x00AB5A},
	{0x00AB5C, 0x00AB69},
	{0x00AB70, 0x00ABE2},
	{0x00AC00, 0x00D7A3},
	{0x00D7B0, 0x00D7C6},
	{0x00D7CB, 0x00D7FB},
	{0x00F900, 0x00FA6D},
	{0x00FA70, 0x00FAD9},
	{0x00FB00, 0x00FB06},
	{0x00FB13, 0x00FB17},
	{0x00FB1D, 0x00FB1D},
	{0x00FB1F, 0x00FB28},
	{0x00FB2A, 0x00FB36},
	{0x00FB38, 0x00FB3C},
	{0x00FB3E, 0x00FB3E},
	{0x00FB40, 0x00FB41},
	{0x00FB43, 0x00FB44},
	{0x00FB46, 0x00FBB1},
	{0x00FBD3, 0x00FC5D},
	{0x00FC64, 0x00FD3D},
	{0x00FD50, 0x00FD8F},
	{0x00FD92, 0x00FDC7},
	{0x00FDF0, 0x00FDF9},
	{0x00FE71, 0x00FE71},
	{0x00FE73, 0x00FE73},
	{0x00FE77, 0x00FE77},
	{0x00FE79, 0x00FE79},
	{0x00FE7B, 0x00FE7B},
	{0x00FE7D, 0x00FE7D},
	{0x00FE7F, 0x00FEFC},
	{0x00FF21, 0x00FF3A},
	{0x00FF41, 0x00FF5A},
	{0x00FF66, 0x00FF9D},
	{0x00FFA0, 0x00FFBE},
	{0x00FFC2, 0x00FFC7},
	{0x00FFCA, 0x00FFCF},
	{0x00FFD2, 0x00FFD7},
	{0x00FFDA, 0x00FFDC},
	{0x010000, 0x01000B},
	{0x01000D, 0x010026},
	{0x010028, 0x01003A},
	{0x01003C, 0x01003D},
	{0x01003F, 0x01004D},
	{0x010050, 0x01005D},
	{0x010080, 0x0100FA},
	{0x010140, 0x010174},
	{0x010280, 0x01029C},
	{0x0102A0, 0x0102D0},
	{0x010300, 0x01031F},
	{0x01032D, 0x01034A},
	{0x010350, 0x010375},
	{0x010380, 0x01039D},
	{0x0103A0, 0x0103C3},
	{0x0103C8, 0x0103CF},
	{0x0103D1, 0x0103D5},
	{0x010400, 0x01049D},
	{0x0104B0, 0x0104D3},
	{0x0104D8, 0x0104FB},
	{0x010500, 0x010527},
	{0x010530, 0x010563},
	{0x010570, 0x01057A},
	{0x01057C, 0x01058A},
	{0x01058C, 0x010592},
	{0x010594, 0x010595},
	{0x010597, 0x0105A1},
	{0x0105A3, 0x0105B1},
	{0x0105B3, 0x0105B9},
	{0x0105BB, 0x0105BC},
	{0x010600, 0x010736},
	{0x010740, 0x010755},
	{0x010760, 0x010767},
	{0x010780, 0x010785},
	{0x010787, 0x0107B0},
	{0x0107B2, 0x0107BA},
	{0x010800, 0x010805},
	{0x010808, 0x010808},
	{0x01080A, 0x010835},
	{0x010837, 0x010838},
	{0x01083C, 0x01083C},
	{0x01083F, 0x010855},
	{0x010860, 0x010876},
	{0x010880, 0x01089E},
	{0x0108E0, 0x0108F2},
	{0x0108F4, 0x0108F5},
	{0x010900, 0x010915},
	{0x010920, 0x010939},
	{0x010980, 0x0109B7},
	{0x0109BE, 0x0109BF},
	{0x010A00, 0x010A00},
	{0x010A10, 0x010A13},
	{0x010A15, 0x010A17},
	{0x010A19, 0x010A35},
	{0x010A60, 0x010A7C},
	{0x010A80, 0x010A9C},
	{0x010AC0, 0x010AC7},
	{0x010AC9, 0x010AE4},
	{0x010B00, 0x010B35},
	{0x010B40, 0x010B55},
	{0x010B60, 0x010B72},
	{0x010B80, 0x010B91},
	{0x010C00, 0x010C48},
	{0x010C80, 0x010CB2},
	{0x010CC0, 0x010CF2},
	{0x010D00, 0x010D23},
	{0x010E80, 0x010EA9},
	{0x010EB0, 0x010EB1},
	{0x010F00, 0x010F1C},
	{0x010F27, 0x010F27},
	{0x010F30, 0x010F45},
	{0x010F70, 0x010F81},
	{0x010FB0, 0x010FC4},
	{0x010FE0, 0x010FF6},
	{0x011003, 0x011037},
	{0x011071, 0x011072},
	{0x011075, 0x011075},
	{0x011083, 0x0110AF},
	{0x0110D0, 0x0110E8},
	{0x011103, 0x011126},
	{0x011144, 0x011144},
	{0x011147, 0x011147},
	{0x011150, 0x011172},
	{0x011176, 0x011176},
	{0x011183, 0x0111B2},
	{0x0111C1, 0x0111C4},
	{0x0111DA, 0x0111DA},
	{0x0111DC, 0x0111DC},
	{0x011200, 0x011211},
	{0x011213, 0x01122B},
	{0x01123F, 0x011240},
	{0x011280, 0x011286},
	{0x011288, 0x011288},
	{0x01128A, 0x01128D},
	{0x01128F, 0x01129D},
	{0x01129F, 0x0112A8},
	{0x0112B0, 0x0112DE},
	{0x011305, 0x01130C},
	{0x01130F, 0x011310},
	{0x011313, 0x011328},
	{0x01132A, 0x011330},
	{0x011332, 0x011333},
	{0x011335, 0x011339},
	{0x01133D, 0x01133D},
	{0x011350, 0x011350},
	{0x01135D, 0x011361},
	{0x011400, 0x011434},
	{0x011447, 0x01144A},
	{0x01145F, 0x011461},
	{0x011480, 0x0114AF},
	{0x0114C4, 0x0114C5},
	{0x0114C7, 0x0114C7},
	{0x011580, 0x0115AE},
	{0x0115D8, 0x0115DB},
	{0x011600, 0x01162F},
	{0x011644, 0x011644},
	{0x011680, 0x0116AA},
	{0x0116B8, 0x0116B8},
	{0x011700, 0x01171A},
	{0x011740, 0x011746},
	{0x011800, 0x01182B},
	{0x0118A0, 0x0118DF},
	{0x0118FF, 0x011906},
	{0x011909, 0x011909},
	{0x01190C, 0x011913},
	{0x011915, 0x011916},
	{0x011918, 0x01192F},
	{0x01193F, 0x01193F},
	{0x011941, 0x011941},
	{0x0119A0, 0x0119A7},
	{0x0119AA, 0x0119D0},
	{0x0119E1, 0x0119E1},
	{0x0119E3, 0x0119E3},
	{0x011A00, 0x011A00},
	{0x011A0B, 0x011A32},
	{0x011A3A, 0x011A3A},
	{0x011A50, 0x011A50},
	{0x011A5C, 0x011A89},
	{0x011A9D, 0x011A9D},
	{0x011AB0, 0x011AF8},
	{0x011C00, 0x011C08},
	{0x011C0A, 0x011C2E},
	{0x011C40, 0x011C40},
	{0x011C72, 0x011C8F},
	{0x011D00, 0x011D06},
	{0x011D08, 0x011D09},
	{0x011D0B, 0x011D30},
	{0x011D46, 0x011D46},
	{0x011D60, 0x011D65},
	{0x011D67, 0x011D68},
	{0x011D6A, 0x011D89},
	{0x011D98, 0x011D98},
	{0x011EE0, 0x011EF2},
	{0x011F02, 0x011F02},
	{0x011F04, 0x011F10},
	{0x011F12, 0x011F33},
	{0x011FB0, 0x011FB0},
	{0x012000, 0x012399},
	{0x012400, 0x01246E},
	{0x012480, 0x012543},
	{0x012F90, 0x012FF0},
	{0x013000, 0x01342F},
	{0x013441, 0x013446},
	{0x014400, 0x014646},
	{0x016800, 0x016A38},
	{0x016A40, 0x016A5E},
	{0x016A70, 0x016ABE},
	{0x016AD0, 0x016AED},
	{0x016B00, 0x016B2F},
	{0x016B40, 0x016B43},
	{0x016B63, 0x016B77},
	{0x016B7D, 0x016B8F},
	{0x016E40, 0x016E7F},
	{0x016F00, 0x016F4A},
	{0x016F50, 0x016F50},
	{0x016F93, 0x016F9F},
	{0x016FE0, 0x016FE1},
	{0x016FE3, 0x016FE3},
	{0x017000, 0x0187F7},
	{0x018800, 0x018CD5},
	{0x018D00, 0x018D08},
	{0x01AFF0, 0x01AFF3},
	{0x01AFF5, 0x01AFFB},
	{0x01AFFD, 0x01AFFE},
	{0x01B000, 0x01B122},
	{0x01B132, 0x01B132},
	{0x01B150, 0x01B152},
	{0x01B155, 0x01B155},
	{0x01B164, 0x01B167},
	{0x01B170, 0x01B2FB},
	{0x01BC00, 0x01BC6A},
	{0x01BC70, 0x01BC7C},
	{0x01BC80, 0x01BC88},
	{0x01BC90, 0x01BC99},
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
	{0x01DF00, 0x01DF1E},
	{0x01DF25, 0x01DF2A},
	{0x01E030, 0x01E06D},
	{0x01E100, 0x01E12C},
	{0x01E137, 0x01E13D},
	{0x01E14E, 0x01E14E},
	{0x01E290, 0x01E2AD},
	{0x01E2C0, 0x01E2EB},
	{0x01E4D0, 0x01E4EB},
	{0x01E7E0, 0x01E7E6},
	{0x01E7E8, 0x01E7EB},
	{0x01E7ED, 0x01E7EE},
	{0x01E7F0, 0x01E7FE},
	{0x01E800, 0x01E8C4},
	{0x01E900, 0x01E943},
	{0x01E94B, 0x01E94B},
	{0x01EE00, 0x01EE03},
	{0x01EE05, 0x01EE1F},
	{0x01EE21, 0x01EE22},
	{0x01EE24, 0x01EE24},
	{0x01EE27, 0x01EE27},
	{0x01EE29, 0x01EE32},
	{0x01EE34, 0x01EE37},
	{0x01EE39, 0x01EE39},
	{0x01EE3B, 0x01EE3B},
	{0x01EE42, 0x01EE42},
	{0x01EE47, 0x01EE47},
	{0x01EE49, 0x01EE49},
	{0x01EE4B, 0x01EE4B},
	{0x01EE4D, 0x01EE4F},
	{0x01EE51, 0x01EE52},
	{0x01EE54, 0x01EE54},
	{0x01EE57, 0x01EE57},
	{0x01EE59, 0x01EE59},
	{0x01EE5B, 0x01EE5B},
	{0x01EE5D, 0x01EE5D},
	{0x01EE5F, 0x01EE5F},
	{0x01EE61, 0x01EE62},
	{0x01EE64, 0x01EE64},
	{0x01EE67, 0x01EE6A},
	{0x01EE6C, 0x01EE72},
	{0x01EE74, 0x01EE77},
	{0x01EE79, 0x01EE7C},
	{0x01EE7E, 0x01EE7E},
	{0x01EE80, 0x01EE89},
	{0x01EE8B, 0x01EE9B},
	{0x01EEA1, 0x01EEA3},
	{0x01EEA5, 0x01EEA9},
	{0x01EEAB, 0x01EEBB},
	{0x020000, 0x02A6DF},
	{0x02A700, 0x02B739},
	{0x02B740, 0x02B81D},
	{0x02B820, 0x02CEA1},
	{0x02CEB0, 0x02EBE0},
	{0x02EBF0, 0x02EE5D},
	{0x02F800, 0x02FA1D},
	{0x030000, 0x03134A},
	{0x031350, 0x0323AF},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rune_has_prop_xid_start(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
