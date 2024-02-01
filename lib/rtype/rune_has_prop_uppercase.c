/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"

#include "internal/common.h"

/* clang-format off */

#if BIT_LOOKUP
static const unsigned _BitInt(LATIN1_MAX + 1) mask = \
	0x000000007F7FFFFF00000000000000000000000007FFFFFE0000000000000000uwb;
#endif

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{0x000041, 0x00005A},
	{0x0000C0, 0x0000D6},
	{0x0000D8, 0x0000DE},
	{0x000100, 0x000100},
	{0x000102, 0x000102},
	{0x000104, 0x000104},
	{0x000106, 0x000106},
	{0x000108, 0x000108},
	{0x00010A, 0x00010A},
	{0x00010C, 0x00010C},
	{0x00010E, 0x00010E},
	{0x000110, 0x000110},
	{0x000112, 0x000112},
	{0x000114, 0x000114},
	{0x000116, 0x000116},
	{0x000118, 0x000118},
	{0x00011A, 0x00011A},
	{0x00011C, 0x00011C},
	{0x00011E, 0x00011E},
	{0x000120, 0x000120},
	{0x000122, 0x000122},
	{0x000124, 0x000124},
	{0x000126, 0x000126},
	{0x000128, 0x000128},
	{0x00012A, 0x00012A},
	{0x00012C, 0x00012C},
	{0x00012E, 0x00012E},
	{0x000130, 0x000130},
	{0x000132, 0x000132},
	{0x000134, 0x000134},
	{0x000136, 0x000136},
	{0x000139, 0x000139},
	{0x00013B, 0x00013B},
	{0x00013D, 0x00013D},
	{0x00013F, 0x00013F},
	{0x000141, 0x000141},
	{0x000143, 0x000143},
	{0x000145, 0x000145},
	{0x000147, 0x000147},
	{0x00014A, 0x00014A},
	{0x00014C, 0x00014C},
	{0x00014E, 0x00014E},
	{0x000150, 0x000150},
	{0x000152, 0x000152},
	{0x000154, 0x000154},
	{0x000156, 0x000156},
	{0x000158, 0x000158},
	{0x00015A, 0x00015A},
	{0x00015C, 0x00015C},
	{0x00015E, 0x00015E},
	{0x000160, 0x000160},
	{0x000162, 0x000162},
	{0x000164, 0x000164},
	{0x000166, 0x000166},
	{0x000168, 0x000168},
	{0x00016A, 0x00016A},
	{0x00016C, 0x00016C},
	{0x00016E, 0x00016E},
	{0x000170, 0x000170},
	{0x000172, 0x000172},
	{0x000174, 0x000174},
	{0x000176, 0x000176},
	{0x000178, 0x000179},
	{0x00017B, 0x00017B},
	{0x00017D, 0x00017D},
	{0x000181, 0x000182},
	{0x000184, 0x000184},
	{0x000186, 0x000187},
	{0x000189, 0x00018B},
	{0x00018E, 0x000191},
	{0x000193, 0x000194},
	{0x000196, 0x000198},
	{0x00019C, 0x00019D},
	{0x00019F, 0x0001A0},
	{0x0001A2, 0x0001A2},
	{0x0001A4, 0x0001A4},
	{0x0001A6, 0x0001A7},
	{0x0001A9, 0x0001A9},
	{0x0001AC, 0x0001AC},
	{0x0001AE, 0x0001AF},
	{0x0001B1, 0x0001B3},
	{0x0001B5, 0x0001B5},
	{0x0001B7, 0x0001B8},
	{0x0001BC, 0x0001BC},
	{0x0001C4, 0x0001C4},
	{0x0001C7, 0x0001C7},
	{0x0001CA, 0x0001CA},
	{0x0001CD, 0x0001CD},
	{0x0001CF, 0x0001CF},
	{0x0001D1, 0x0001D1},
	{0x0001D3, 0x0001D3},
	{0x0001D5, 0x0001D5},
	{0x0001D7, 0x0001D7},
	{0x0001D9, 0x0001D9},
	{0x0001DB, 0x0001DB},
	{0x0001DE, 0x0001DE},
	{0x0001E0, 0x0001E0},
	{0x0001E2, 0x0001E2},
	{0x0001E4, 0x0001E4},
	{0x0001E6, 0x0001E6},
	{0x0001E8, 0x0001E8},
	{0x0001EA, 0x0001EA},
	{0x0001EC, 0x0001EC},
	{0x0001EE, 0x0001EE},
	{0x0001F1, 0x0001F1},
	{0x0001F4, 0x0001F4},
	{0x0001F6, 0x0001F8},
	{0x0001FA, 0x0001FA},
	{0x0001FC, 0x0001FC},
	{0x0001FE, 0x0001FE},
	{0x000200, 0x000200},
	{0x000202, 0x000202},
	{0x000204, 0x000204},
	{0x000206, 0x000206},
	{0x000208, 0x000208},
	{0x00020A, 0x00020A},
	{0x00020C, 0x00020C},
	{0x00020E, 0x00020E},
	{0x000210, 0x000210},
	{0x000212, 0x000212},
	{0x000214, 0x000214},
	{0x000216, 0x000216},
	{0x000218, 0x000218},
	{0x00021A, 0x00021A},
	{0x00021C, 0x00021C},
	{0x00021E, 0x00021E},
	{0x000220, 0x000220},
	{0x000222, 0x000222},
	{0x000224, 0x000224},
	{0x000226, 0x000226},
	{0x000228, 0x000228},
	{0x00022A, 0x00022A},
	{0x00022C, 0x00022C},
	{0x00022E, 0x00022E},
	{0x000230, 0x000230},
	{0x000232, 0x000232},
	{0x00023A, 0x00023B},
	{0x00023D, 0x00023E},
	{0x000241, 0x000241},
	{0x000243, 0x000246},
	{0x000248, 0x000248},
	{0x00024A, 0x00024A},
	{0x00024C, 0x00024C},
	{0x00024E, 0x00024E},
	{0x000370, 0x000370},
	{0x000372, 0x000372},
	{0x000376, 0x000376},
	{0x00037F, 0x00037F},
	{0x000386, 0x000386},
	{0x000388, 0x00038A},
	{0x00038C, 0x00038C},
	{0x00038E, 0x00038F},
	{0x000391, 0x0003A1},
	{0x0003A3, 0x0003AB},
	{0x0003CF, 0x0003CF},
	{0x0003D2, 0x0003D4},
	{0x0003D8, 0x0003D8},
	{0x0003DA, 0x0003DA},
	{0x0003DC, 0x0003DC},
	{0x0003DE, 0x0003DE},
	{0x0003E0, 0x0003E0},
	{0x0003E2, 0x0003E2},
	{0x0003E4, 0x0003E4},
	{0x0003E6, 0x0003E6},
	{0x0003E8, 0x0003E8},
	{0x0003EA, 0x0003EA},
	{0x0003EC, 0x0003EC},
	{0x0003EE, 0x0003EE},
	{0x0003F4, 0x0003F4},
	{0x0003F7, 0x0003F7},
	{0x0003F9, 0x0003FA},
	{0x0003FD, 0x00042F},
	{0x000460, 0x000460},
	{0x000462, 0x000462},
	{0x000464, 0x000464},
	{0x000466, 0x000466},
	{0x000468, 0x000468},
	{0x00046A, 0x00046A},
	{0x00046C, 0x00046C},
	{0x00046E, 0x00046E},
	{0x000470, 0x000470},
	{0x000472, 0x000472},
	{0x000474, 0x000474},
	{0x000476, 0x000476},
	{0x000478, 0x000478},
	{0x00047A, 0x00047A},
	{0x00047C, 0x00047C},
	{0x00047E, 0x00047E},
	{0x000480, 0x000480},
	{0x00048A, 0x00048A},
	{0x00048C, 0x00048C},
	{0x00048E, 0x00048E},
	{0x000490, 0x000490},
	{0x000492, 0x000492},
	{0x000494, 0x000494},
	{0x000496, 0x000496},
	{0x000498, 0x000498},
	{0x00049A, 0x00049A},
	{0x00049C, 0x00049C},
	{0x00049E, 0x00049E},
	{0x0004A0, 0x0004A0},
	{0x0004A2, 0x0004A2},
	{0x0004A4, 0x0004A4},
	{0x0004A6, 0x0004A6},
	{0x0004A8, 0x0004A8},
	{0x0004AA, 0x0004AA},
	{0x0004AC, 0x0004AC},
	{0x0004AE, 0x0004AE},
	{0x0004B0, 0x0004B0},
	{0x0004B2, 0x0004B2},
	{0x0004B4, 0x0004B4},
	{0x0004B6, 0x0004B6},
	{0x0004B8, 0x0004B8},
	{0x0004BA, 0x0004BA},
	{0x0004BC, 0x0004BC},
	{0x0004BE, 0x0004BE},
	{0x0004C0, 0x0004C1},
	{0x0004C3, 0x0004C3},
	{0x0004C5, 0x0004C5},
	{0x0004C7, 0x0004C7},
	{0x0004C9, 0x0004C9},
	{0x0004CB, 0x0004CB},
	{0x0004CD, 0x0004CD},
	{0x0004D0, 0x0004D0},
	{0x0004D2, 0x0004D2},
	{0x0004D4, 0x0004D4},
	{0x0004D6, 0x0004D6},
	{0x0004D8, 0x0004D8},
	{0x0004DA, 0x0004DA},
	{0x0004DC, 0x0004DC},
	{0x0004DE, 0x0004DE},
	{0x0004E0, 0x0004E0},
	{0x0004E2, 0x0004E2},
	{0x0004E4, 0x0004E4},
	{0x0004E6, 0x0004E6},
	{0x0004E8, 0x0004E8},
	{0x0004EA, 0x0004EA},
	{0x0004EC, 0x0004EC},
	{0x0004EE, 0x0004EE},
	{0x0004F0, 0x0004F0},
	{0x0004F2, 0x0004F2},
	{0x0004F4, 0x0004F4},
	{0x0004F6, 0x0004F6},
	{0x0004F8, 0x0004F8},
	{0x0004FA, 0x0004FA},
	{0x0004FC, 0x0004FC},
	{0x0004FE, 0x0004FE},
	{0x000500, 0x000500},
	{0x000502, 0x000502},
	{0x000504, 0x000504},
	{0x000506, 0x000506},
	{0x000508, 0x000508},
	{0x00050A, 0x00050A},
	{0x00050C, 0x00050C},
	{0x00050E, 0x00050E},
	{0x000510, 0x000510},
	{0x000512, 0x000512},
	{0x000514, 0x000514},
	{0x000516, 0x000516},
	{0x000518, 0x000518},
	{0x00051A, 0x00051A},
	{0x00051C, 0x00051C},
	{0x00051E, 0x00051E},
	{0x000520, 0x000520},
	{0x000522, 0x000522},
	{0x000524, 0x000524},
	{0x000526, 0x000526},
	{0x000528, 0x000528},
	{0x00052A, 0x00052A},
	{0x00052C, 0x00052C},
	{0x00052E, 0x00052E},
	{0x000531, 0x000556},
	{0x0010A0, 0x0010C5},
	{0x0010C7, 0x0010C7},
	{0x0010CD, 0x0010CD},
	{0x0013A0, 0x0013F5},
	{0x001C90, 0x001CBA},
	{0x001CBD, 0x001CBF},
	{0x001E00, 0x001E00},
	{0x001E02, 0x001E02},
	{0x001E04, 0x001E04},
	{0x001E06, 0x001E06},
	{0x001E08, 0x001E08},
	{0x001E0A, 0x001E0A},
	{0x001E0C, 0x001E0C},
	{0x001E0E, 0x001E0E},
	{0x001E10, 0x001E10},
	{0x001E12, 0x001E12},
	{0x001E14, 0x001E14},
	{0x001E16, 0x001E16},
	{0x001E18, 0x001E18},
	{0x001E1A, 0x001E1A},
	{0x001E1C, 0x001E1C},
	{0x001E1E, 0x001E1E},
	{0x001E20, 0x001E20},
	{0x001E22, 0x001E22},
	{0x001E24, 0x001E24},
	{0x001E26, 0x001E26},
	{0x001E28, 0x001E28},
	{0x001E2A, 0x001E2A},
	{0x001E2C, 0x001E2C},
	{0x001E2E, 0x001E2E},
	{0x001E30, 0x001E30},
	{0x001E32, 0x001E32},
	{0x001E34, 0x001E34},
	{0x001E36, 0x001E36},
	{0x001E38, 0x001E38},
	{0x001E3A, 0x001E3A},
	{0x001E3C, 0x001E3C},
	{0x001E3E, 0x001E3E},
	{0x001E40, 0x001E40},
	{0x001E42, 0x001E42},
	{0x001E44, 0x001E44},
	{0x001E46, 0x001E46},
	{0x001E48, 0x001E48},
	{0x001E4A, 0x001E4A},
	{0x001E4C, 0x001E4C},
	{0x001E4E, 0x001E4E},
	{0x001E50, 0x001E50},
	{0x001E52, 0x001E52},
	{0x001E54, 0x001E54},
	{0x001E56, 0x001E56},
	{0x001E58, 0x001E58},
	{0x001E5A, 0x001E5A},
	{0x001E5C, 0x001E5C},
	{0x001E5E, 0x001E5E},
	{0x001E60, 0x001E60},
	{0x001E62, 0x001E62},
	{0x001E64, 0x001E64},
	{0x001E66, 0x001E66},
	{0x001E68, 0x001E68},
	{0x001E6A, 0x001E6A},
	{0x001E6C, 0x001E6C},
	{0x001E6E, 0x001E6E},
	{0x001E70, 0x001E70},
	{0x001E72, 0x001E72},
	{0x001E74, 0x001E74},
	{0x001E76, 0x001E76},
	{0x001E78, 0x001E78},
	{0x001E7A, 0x001E7A},
	{0x001E7C, 0x001E7C},
	{0x001E7E, 0x001E7E},
	{0x001E80, 0x001E80},
	{0x001E82, 0x001E82},
	{0x001E84, 0x001E84},
	{0x001E86, 0x001E86},
	{0x001E88, 0x001E88},
	{0x001E8A, 0x001E8A},
	{0x001E8C, 0x001E8C},
	{0x001E8E, 0x001E8E},
	{0x001E90, 0x001E90},
	{0x001E92, 0x001E92},
	{0x001E94, 0x001E94},
	{0x001E9E, 0x001E9E},
	{0x001EA0, 0x001EA0},
	{0x001EA2, 0x001EA2},
	{0x001EA4, 0x001EA4},
	{0x001EA6, 0x001EA6},
	{0x001EA8, 0x001EA8},
	{0x001EAA, 0x001EAA},
	{0x001EAC, 0x001EAC},
	{0x001EAE, 0x001EAE},
	{0x001EB0, 0x001EB0},
	{0x001EB2, 0x001EB2},
	{0x001EB4, 0x001EB4},
	{0x001EB6, 0x001EB6},
	{0x001EB8, 0x001EB8},
	{0x001EBA, 0x001EBA},
	{0x001EBC, 0x001EBC},
	{0x001EBE, 0x001EBE},
	{0x001EC0, 0x001EC0},
	{0x001EC2, 0x001EC2},
	{0x001EC4, 0x001EC4},
	{0x001EC6, 0x001EC6},
	{0x001EC8, 0x001EC8},
	{0x001ECA, 0x001ECA},
	{0x001ECC, 0x001ECC},
	{0x001ECE, 0x001ECE},
	{0x001ED0, 0x001ED0},
	{0x001ED2, 0x001ED2},
	{0x001ED4, 0x001ED4},
	{0x001ED6, 0x001ED6},
	{0x001ED8, 0x001ED8},
	{0x001EDA, 0x001EDA},
	{0x001EDC, 0x001EDC},
	{0x001EDE, 0x001EDE},
	{0x001EE0, 0x001EE0},
	{0x001EE2, 0x001EE2},
	{0x001EE4, 0x001EE4},
	{0x001EE6, 0x001EE6},
	{0x001EE8, 0x001EE8},
	{0x001EEA, 0x001EEA},
	{0x001EEC, 0x001EEC},
	{0x001EEE, 0x001EEE},
	{0x001EF0, 0x001EF0},
	{0x001EF2, 0x001EF2},
	{0x001EF4, 0x001EF4},
	{0x001EF6, 0x001EF6},
	{0x001EF8, 0x001EF8},
	{0x001EFA, 0x001EFA},
	{0x001EFC, 0x001EFC},
	{0x001EFE, 0x001EFE},
	{0x001F08, 0x001F0F},
	{0x001F18, 0x001F1D},
	{0x001F28, 0x001F2F},
	{0x001F38, 0x001F3F},
	{0x001F48, 0x001F4D},
	{0x001F59, 0x001F59},
	{0x001F5B, 0x001F5B},
	{0x001F5D, 0x001F5D},
	{0x001F5F, 0x001F5F},
	{0x001F68, 0x001F6F},
	{0x001FB8, 0x001FBB},
	{0x001FC8, 0x001FCB},
	{0x001FD8, 0x001FDB},
	{0x001FE8, 0x001FEC},
	{0x001FF8, 0x001FFB},
	{0x002102, 0x002102},
	{0x002107, 0x002107},
	{0x00210B, 0x00210D},
	{0x002110, 0x002112},
	{0x002115, 0x002115},
	{0x002119, 0x00211D},
	{0x002124, 0x002124},
	{0x002126, 0x002126},
	{0x002128, 0x002128},
	{0x00212A, 0x00212D},
	{0x002130, 0x002133},
	{0x00213E, 0x00213F},
	{0x002145, 0x002145},
	{0x002160, 0x00216F},
	{0x002183, 0x002183},
	{0x0024B6, 0x0024CF},
	{0x002C00, 0x002C2F},
	{0x002C60, 0x002C60},
	{0x002C62, 0x002C64},
	{0x002C67, 0x002C67},
	{0x002C69, 0x002C69},
	{0x002C6B, 0x002C6B},
	{0x002C6D, 0x002C70},
	{0x002C72, 0x002C72},
	{0x002C75, 0x002C75},
	{0x002C7E, 0x002C80},
	{0x002C82, 0x002C82},
	{0x002C84, 0x002C84},
	{0x002C86, 0x002C86},
	{0x002C88, 0x002C88},
	{0x002C8A, 0x002C8A},
	{0x002C8C, 0x002C8C},
	{0x002C8E, 0x002C8E},
	{0x002C90, 0x002C90},
	{0x002C92, 0x002C92},
	{0x002C94, 0x002C94},
	{0x002C96, 0x002C96},
	{0x002C98, 0x002C98},
	{0x002C9A, 0x002C9A},
	{0x002C9C, 0x002C9C},
	{0x002C9E, 0x002C9E},
	{0x002CA0, 0x002CA0},
	{0x002CA2, 0x002CA2},
	{0x002CA4, 0x002CA4},
	{0x002CA6, 0x002CA6},
	{0x002CA8, 0x002CA8},
	{0x002CAA, 0x002CAA},
	{0x002CAC, 0x002CAC},
	{0x002CAE, 0x002CAE},
	{0x002CB0, 0x002CB0},
	{0x002CB2, 0x002CB2},
	{0x002CB4, 0x002CB4},
	{0x002CB6, 0x002CB6},
	{0x002CB8, 0x002CB8},
	{0x002CBA, 0x002CBA},
	{0x002CBC, 0x002CBC},
	{0x002CBE, 0x002CBE},
	{0x002CC0, 0x002CC0},
	{0x002CC2, 0x002CC2},
	{0x002CC4, 0x002CC4},
	{0x002CC6, 0x002CC6},
	{0x002CC8, 0x002CC8},
	{0x002CCA, 0x002CCA},
	{0x002CCC, 0x002CCC},
	{0x002CCE, 0x002CCE},
	{0x002CD0, 0x002CD0},
	{0x002CD2, 0x002CD2},
	{0x002CD4, 0x002CD4},
	{0x002CD6, 0x002CD6},
	{0x002CD8, 0x002CD8},
	{0x002CDA, 0x002CDA},
	{0x002CDC, 0x002CDC},
	{0x002CDE, 0x002CDE},
	{0x002CE0, 0x002CE0},
	{0x002CE2, 0x002CE2},
	{0x002CEB, 0x002CEB},
	{0x002CED, 0x002CED},
	{0x002CF2, 0x002CF2},
	{0x00A640, 0x00A640},
	{0x00A642, 0x00A642},
	{0x00A644, 0x00A644},
	{0x00A646, 0x00A646},
	{0x00A648, 0x00A648},
	{0x00A64A, 0x00A64A},
	{0x00A64C, 0x00A64C},
	{0x00A64E, 0x00A64E},
	{0x00A650, 0x00A650},
	{0x00A652, 0x00A652},
	{0x00A654, 0x00A654},
	{0x00A656, 0x00A656},
	{0x00A658, 0x00A658},
	{0x00A65A, 0x00A65A},
	{0x00A65C, 0x00A65C},
	{0x00A65E, 0x00A65E},
	{0x00A660, 0x00A660},
	{0x00A662, 0x00A662},
	{0x00A664, 0x00A664},
	{0x00A666, 0x00A666},
	{0x00A668, 0x00A668},
	{0x00A66A, 0x00A66A},
	{0x00A66C, 0x00A66C},
	{0x00A680, 0x00A680},
	{0x00A682, 0x00A682},
	{0x00A684, 0x00A684},
	{0x00A686, 0x00A686},
	{0x00A688, 0x00A688},
	{0x00A68A, 0x00A68A},
	{0x00A68C, 0x00A68C},
	{0x00A68E, 0x00A68E},
	{0x00A690, 0x00A690},
	{0x00A692, 0x00A692},
	{0x00A694, 0x00A694},
	{0x00A696, 0x00A696},
	{0x00A698, 0x00A698},
	{0x00A69A, 0x00A69A},
	{0x00A722, 0x00A722},
	{0x00A724, 0x00A724},
	{0x00A726, 0x00A726},
	{0x00A728, 0x00A728},
	{0x00A72A, 0x00A72A},
	{0x00A72C, 0x00A72C},
	{0x00A72E, 0x00A72E},
	{0x00A732, 0x00A732},
	{0x00A734, 0x00A734},
	{0x00A736, 0x00A736},
	{0x00A738, 0x00A738},
	{0x00A73A, 0x00A73A},
	{0x00A73C, 0x00A73C},
	{0x00A73E, 0x00A73E},
	{0x00A740, 0x00A740},
	{0x00A742, 0x00A742},
	{0x00A744, 0x00A744},
	{0x00A746, 0x00A746},
	{0x00A748, 0x00A748},
	{0x00A74A, 0x00A74A},
	{0x00A74C, 0x00A74C},
	{0x00A74E, 0x00A74E},
	{0x00A750, 0x00A750},
	{0x00A752, 0x00A752},
	{0x00A754, 0x00A754},
	{0x00A756, 0x00A756},
	{0x00A758, 0x00A758},
	{0x00A75A, 0x00A75A},
	{0x00A75C, 0x00A75C},
	{0x00A75E, 0x00A75E},
	{0x00A760, 0x00A760},
	{0x00A762, 0x00A762},
	{0x00A764, 0x00A764},
	{0x00A766, 0x00A766},
	{0x00A768, 0x00A768},
	{0x00A76A, 0x00A76A},
	{0x00A76C, 0x00A76C},
	{0x00A76E, 0x00A76E},
	{0x00A779, 0x00A779},
	{0x00A77B, 0x00A77B},
	{0x00A77D, 0x00A77E},
	{0x00A780, 0x00A780},
	{0x00A782, 0x00A782},
	{0x00A784, 0x00A784},
	{0x00A786, 0x00A786},
	{0x00A78B, 0x00A78B},
	{0x00A78D, 0x00A78D},
	{0x00A790, 0x00A790},
	{0x00A792, 0x00A792},
	{0x00A796, 0x00A796},
	{0x00A798, 0x00A798},
	{0x00A79A, 0x00A79A},
	{0x00A79C, 0x00A79C},
	{0x00A79E, 0x00A79E},
	{0x00A7A0, 0x00A7A0},
	{0x00A7A2, 0x00A7A2},
	{0x00A7A4, 0x00A7A4},
	{0x00A7A6, 0x00A7A6},
	{0x00A7A8, 0x00A7A8},
	{0x00A7AA, 0x00A7AE},
	{0x00A7B0, 0x00A7B4},
	{0x00A7B6, 0x00A7B6},
	{0x00A7B8, 0x00A7B8},
	{0x00A7BA, 0x00A7BA},
	{0x00A7BC, 0x00A7BC},
	{0x00A7BE, 0x00A7BE},
	{0x00A7C0, 0x00A7C0},
	{0x00A7C2, 0x00A7C2},
	{0x00A7C4, 0x00A7C7},
	{0x00A7C9, 0x00A7C9},
	{0x00A7D0, 0x00A7D0},
	{0x00A7D6, 0x00A7D6},
	{0x00A7D8, 0x00A7D8},
	{0x00A7F5, 0x00A7F5},
	{0x00FF21, 0x00FF3A},
	{0x010400, 0x010427},
	{0x0104B0, 0x0104D3},
	{0x010570, 0x01057A},
	{0x01057C, 0x01058A},
	{0x01058C, 0x010592},
	{0x010594, 0x010595},
	{0x010C80, 0x010CB2},
	{0x0118A0, 0x0118BF},
	{0x016E40, 0x016E5F},
	{0x01D400, 0x01D419},
	{0x01D434, 0x01D44D},
	{0x01D468, 0x01D481},
	{0x01D49C, 0x01D49C},
	{0x01D49E, 0x01D49F},
	{0x01D4A2, 0x01D4A2},
	{0x01D4A5, 0x01D4A6},
	{0x01D4A9, 0x01D4AC},
	{0x01D4AE, 0x01D4B5},
	{0x01D4D0, 0x01D4E9},
	{0x01D504, 0x01D505},
	{0x01D507, 0x01D50A},
	{0x01D50D, 0x01D514},
	{0x01D516, 0x01D51C},
	{0x01D538, 0x01D539},
	{0x01D53B, 0x01D53E},
	{0x01D540, 0x01D544},
	{0x01D546, 0x01D546},
	{0x01D54A, 0x01D550},
	{0x01D56C, 0x01D585},
	{0x01D5A0, 0x01D5B9},
	{0x01D5D4, 0x01D5ED},
	{0x01D608, 0x01D621},
	{0x01D63C, 0x01D655},
	{0x01D670, 0x01D689},
	{0x01D6A8, 0x01D6C0},
	{0x01D6E2, 0x01D6FA},
	{0x01D71C, 0x01D734},
	{0x01D756, 0x01D76E},
	{0x01D790, 0x01D7A8},
	{0x01D7CA, 0x01D7CA},
	{0x01E900, 0x01E921},
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
rune_has_prop_uppercase(rune ch)
{
	return
#if BIT_LOOKUP
		ch <= LATIN1_MAX ? (mask & (1 << ch)) :
#endif
		lookup(ch);
}
