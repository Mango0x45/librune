/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */

#include "rtype.h"
#include "rune.h"

#include "internal/bitset.h"
#include "internal/common.h"

/* clang-format off */

static const uint64_t bitset[] = {
	UINT64_C(0x0000000000000000),
	UINT64_C(0x0000000007FFFFFE),
	UINT64_C(0x773CA50100000000),
	UINT64_C(0x00000000FF7FFFFF),
};

static const struct {
	rune lo, hi;
} lookup_tbl[] = {
	{RUNE_C(0x000100), RUNE_C(0x000100)},
	{RUNE_C(0x000102), RUNE_C(0x000102)},
	{RUNE_C(0x000104), RUNE_C(0x000104)},
	{RUNE_C(0x000106), RUNE_C(0x000106)},
	{RUNE_C(0x000108), RUNE_C(0x000108)},
	{RUNE_C(0x00010A), RUNE_C(0x00010A)},
	{RUNE_C(0x00010C), RUNE_C(0x00010C)},
	{RUNE_C(0x00010E), RUNE_C(0x00010E)},
	{RUNE_C(0x000110), RUNE_C(0x000110)},
	{RUNE_C(0x000112), RUNE_C(0x000112)},
	{RUNE_C(0x000114), RUNE_C(0x000114)},
	{RUNE_C(0x000116), RUNE_C(0x000116)},
	{RUNE_C(0x000118), RUNE_C(0x000118)},
	{RUNE_C(0x00011A), RUNE_C(0x00011A)},
	{RUNE_C(0x00011C), RUNE_C(0x00011C)},
	{RUNE_C(0x00011E), RUNE_C(0x00011E)},
	{RUNE_C(0x000120), RUNE_C(0x000120)},
	{RUNE_C(0x000122), RUNE_C(0x000122)},
	{RUNE_C(0x000124), RUNE_C(0x000124)},
	{RUNE_C(0x000126), RUNE_C(0x000126)},
	{RUNE_C(0x000128), RUNE_C(0x000128)},
	{RUNE_C(0x00012A), RUNE_C(0x00012A)},
	{RUNE_C(0x00012C), RUNE_C(0x00012C)},
	{RUNE_C(0x00012E), RUNE_C(0x00012E)},
	{RUNE_C(0x000130), RUNE_C(0x000130)},
	{RUNE_C(0x000132), RUNE_C(0x000134)},
	{RUNE_C(0x000136), RUNE_C(0x000136)},
	{RUNE_C(0x000139), RUNE_C(0x000139)},
	{RUNE_C(0x00013B), RUNE_C(0x00013B)},
	{RUNE_C(0x00013D), RUNE_C(0x00013D)},
	{RUNE_C(0x00013F), RUNE_C(0x000141)},
	{RUNE_C(0x000143), RUNE_C(0x000143)},
	{RUNE_C(0x000145), RUNE_C(0x000145)},
	{RUNE_C(0x000147), RUNE_C(0x000147)},
	{RUNE_C(0x000149), RUNE_C(0x00014A)},
	{RUNE_C(0x00014C), RUNE_C(0x00014C)},
	{RUNE_C(0x00014E), RUNE_C(0x00014E)},
	{RUNE_C(0x000150), RUNE_C(0x000150)},
	{RUNE_C(0x000152), RUNE_C(0x000152)},
	{RUNE_C(0x000154), RUNE_C(0x000154)},
	{RUNE_C(0x000156), RUNE_C(0x000156)},
	{RUNE_C(0x000158), RUNE_C(0x000158)},
	{RUNE_C(0x00015A), RUNE_C(0x00015A)},
	{RUNE_C(0x00015C), RUNE_C(0x00015C)},
	{RUNE_C(0x00015E), RUNE_C(0x00015E)},
	{RUNE_C(0x000160), RUNE_C(0x000160)},
	{RUNE_C(0x000162), RUNE_C(0x000162)},
	{RUNE_C(0x000164), RUNE_C(0x000164)},
	{RUNE_C(0x000166), RUNE_C(0x000166)},
	{RUNE_C(0x000168), RUNE_C(0x000168)},
	{RUNE_C(0x00016A), RUNE_C(0x00016A)},
	{RUNE_C(0x00016C), RUNE_C(0x00016C)},
	{RUNE_C(0x00016E), RUNE_C(0x00016E)},
	{RUNE_C(0x000170), RUNE_C(0x000170)},
	{RUNE_C(0x000172), RUNE_C(0x000172)},
	{RUNE_C(0x000174), RUNE_C(0x000174)},
	{RUNE_C(0x000176), RUNE_C(0x000176)},
	{RUNE_C(0x000178), RUNE_C(0x000179)},
	{RUNE_C(0x00017B), RUNE_C(0x00017B)},
	{RUNE_C(0x00017D), RUNE_C(0x00017D)},
	{RUNE_C(0x00017F), RUNE_C(0x00017F)},
	{RUNE_C(0x000181), RUNE_C(0x000182)},
	{RUNE_C(0x000184), RUNE_C(0x000184)},
	{RUNE_C(0x000186), RUNE_C(0x000187)},
	{RUNE_C(0x000189), RUNE_C(0x00018B)},
	{RUNE_C(0x00018E), RUNE_C(0x000191)},
	{RUNE_C(0x000193), RUNE_C(0x000194)},
	{RUNE_C(0x000196), RUNE_C(0x000198)},
	{RUNE_C(0x00019C), RUNE_C(0x00019D)},
	{RUNE_C(0x00019F), RUNE_C(0x0001A0)},
	{RUNE_C(0x0001A2), RUNE_C(0x0001A2)},
	{RUNE_C(0x0001A4), RUNE_C(0x0001A4)},
	{RUNE_C(0x0001A6), RUNE_C(0x0001A7)},
	{RUNE_C(0x0001A9), RUNE_C(0x0001A9)},
	{RUNE_C(0x0001AC), RUNE_C(0x0001AC)},
	{RUNE_C(0x0001AE), RUNE_C(0x0001AF)},
	{RUNE_C(0x0001B1), RUNE_C(0x0001B3)},
	{RUNE_C(0x0001B5), RUNE_C(0x0001B5)},
	{RUNE_C(0x0001B7), RUNE_C(0x0001B8)},
	{RUNE_C(0x0001BC), RUNE_C(0x0001BC)},
	{RUNE_C(0x0001C4), RUNE_C(0x0001CD)},
	{RUNE_C(0x0001CF), RUNE_C(0x0001CF)},
	{RUNE_C(0x0001D1), RUNE_C(0x0001D1)},
	{RUNE_C(0x0001D3), RUNE_C(0x0001D3)},
	{RUNE_C(0x0001D5), RUNE_C(0x0001D5)},
	{RUNE_C(0x0001D7), RUNE_C(0x0001D7)},
	{RUNE_C(0x0001D9), RUNE_C(0x0001D9)},
	{RUNE_C(0x0001DB), RUNE_C(0x0001DB)},
	{RUNE_C(0x0001DE), RUNE_C(0x0001DE)},
	{RUNE_C(0x0001E0), RUNE_C(0x0001E0)},
	{RUNE_C(0x0001E2), RUNE_C(0x0001E2)},
	{RUNE_C(0x0001E4), RUNE_C(0x0001E4)},
	{RUNE_C(0x0001E6), RUNE_C(0x0001E6)},
	{RUNE_C(0x0001E8), RUNE_C(0x0001E8)},
	{RUNE_C(0x0001EA), RUNE_C(0x0001EA)},
	{RUNE_C(0x0001EC), RUNE_C(0x0001EC)},
	{RUNE_C(0x0001EE), RUNE_C(0x0001EE)},
	{RUNE_C(0x0001F1), RUNE_C(0x0001F4)},
	{RUNE_C(0x0001F6), RUNE_C(0x0001F8)},
	{RUNE_C(0x0001FA), RUNE_C(0x0001FA)},
	{RUNE_C(0x0001FC), RUNE_C(0x0001FC)},
	{RUNE_C(0x0001FE), RUNE_C(0x0001FE)},
	{RUNE_C(0x000200), RUNE_C(0x000200)},
	{RUNE_C(0x000202), RUNE_C(0x000202)},
	{RUNE_C(0x000204), RUNE_C(0x000204)},
	{RUNE_C(0x000206), RUNE_C(0x000206)},
	{RUNE_C(0x000208), RUNE_C(0x000208)},
	{RUNE_C(0x00020A), RUNE_C(0x00020A)},
	{RUNE_C(0x00020C), RUNE_C(0x00020C)},
	{RUNE_C(0x00020E), RUNE_C(0x00020E)},
	{RUNE_C(0x000210), RUNE_C(0x000210)},
	{RUNE_C(0x000212), RUNE_C(0x000212)},
	{RUNE_C(0x000214), RUNE_C(0x000214)},
	{RUNE_C(0x000216), RUNE_C(0x000216)},
	{RUNE_C(0x000218), RUNE_C(0x000218)},
	{RUNE_C(0x00021A), RUNE_C(0x00021A)},
	{RUNE_C(0x00021C), RUNE_C(0x00021C)},
	{RUNE_C(0x00021E), RUNE_C(0x00021E)},
	{RUNE_C(0x000220), RUNE_C(0x000220)},
	{RUNE_C(0x000222), RUNE_C(0x000222)},
	{RUNE_C(0x000224), RUNE_C(0x000224)},
	{RUNE_C(0x000226), RUNE_C(0x000226)},
	{RUNE_C(0x000228), RUNE_C(0x000228)},
	{RUNE_C(0x00022A), RUNE_C(0x00022A)},
	{RUNE_C(0x00022C), RUNE_C(0x00022C)},
	{RUNE_C(0x00022E), RUNE_C(0x00022E)},
	{RUNE_C(0x000230), RUNE_C(0x000230)},
	{RUNE_C(0x000232), RUNE_C(0x000232)},
	{RUNE_C(0x00023A), RUNE_C(0x00023B)},
	{RUNE_C(0x00023D), RUNE_C(0x00023E)},
	{RUNE_C(0x000241), RUNE_C(0x000241)},
	{RUNE_C(0x000243), RUNE_C(0x000246)},
	{RUNE_C(0x000248), RUNE_C(0x000248)},
	{RUNE_C(0x00024A), RUNE_C(0x00024A)},
	{RUNE_C(0x00024C), RUNE_C(0x00024C)},
	{RUNE_C(0x00024E), RUNE_C(0x00024E)},
	{RUNE_C(0x0002B0), RUNE_C(0x0002B8)},
	{RUNE_C(0x0002D8), RUNE_C(0x0002DD)},
	{RUNE_C(0x0002E0), RUNE_C(0x0002E4)},
	{RUNE_C(0x000340), RUNE_C(0x000341)},
	{RUNE_C(0x000343), RUNE_C(0x000345)},
	{RUNE_C(0x00034F), RUNE_C(0x00034F)},
	{RUNE_C(0x000370), RUNE_C(0x000370)},
	{RUNE_C(0x000372), RUNE_C(0x000372)},
	{RUNE_C(0x000374), RUNE_C(0x000374)},
	{RUNE_C(0x000376), RUNE_C(0x000376)},
	{RUNE_C(0x00037A), RUNE_C(0x00037A)},
	{RUNE_C(0x00037E), RUNE_C(0x00037F)},
	{RUNE_C(0x000384), RUNE_C(0x00038A)},
	{RUNE_C(0x00038C), RUNE_C(0x00038C)},
	{RUNE_C(0x00038E), RUNE_C(0x00038F)},
	{RUNE_C(0x000391), RUNE_C(0x0003A1)},
	{RUNE_C(0x0003A3), RUNE_C(0x0003AB)},
	{RUNE_C(0x0003C2), RUNE_C(0x0003C2)},
	{RUNE_C(0x0003CF), RUNE_C(0x0003D6)},
	{RUNE_C(0x0003D8), RUNE_C(0x0003D8)},
	{RUNE_C(0x0003DA), RUNE_C(0x0003DA)},
	{RUNE_C(0x0003DC), RUNE_C(0x0003DC)},
	{RUNE_C(0x0003DE), RUNE_C(0x0003DE)},
	{RUNE_C(0x0003E0), RUNE_C(0x0003E0)},
	{RUNE_C(0x0003E2), RUNE_C(0x0003E2)},
	{RUNE_C(0x0003E4), RUNE_C(0x0003E4)},
	{RUNE_C(0x0003E6), RUNE_C(0x0003E6)},
	{RUNE_C(0x0003E8), RUNE_C(0x0003E8)},
	{RUNE_C(0x0003EA), RUNE_C(0x0003EA)},
	{RUNE_C(0x0003EC), RUNE_C(0x0003EC)},
	{RUNE_C(0x0003EE), RUNE_C(0x0003EE)},
	{RUNE_C(0x0003F0), RUNE_C(0x0003F2)},
	{RUNE_C(0x0003F4), RUNE_C(0x0003F5)},
	{RUNE_C(0x0003F7), RUNE_C(0x0003F7)},
	{RUNE_C(0x0003F9), RUNE_C(0x0003FA)},
	{RUNE_C(0x0003FD), RUNE_C(0x00042F)},
	{RUNE_C(0x000460), RUNE_C(0x000460)},
	{RUNE_C(0x000462), RUNE_C(0x000462)},
	{RUNE_C(0x000464), RUNE_C(0x000464)},
	{RUNE_C(0x000466), RUNE_C(0x000466)},
	{RUNE_C(0x000468), RUNE_C(0x000468)},
	{RUNE_C(0x00046A), RUNE_C(0x00046A)},
	{RUNE_C(0x00046C), RUNE_C(0x00046C)},
	{RUNE_C(0x00046E), RUNE_C(0x00046E)},
	{RUNE_C(0x000470), RUNE_C(0x000470)},
	{RUNE_C(0x000472), RUNE_C(0x000472)},
	{RUNE_C(0x000474), RUNE_C(0x000474)},
	{RUNE_C(0x000476), RUNE_C(0x000476)},
	{RUNE_C(0x000478), RUNE_C(0x000478)},
	{RUNE_C(0x00047A), RUNE_C(0x00047A)},
	{RUNE_C(0x00047C), RUNE_C(0x00047C)},
	{RUNE_C(0x00047E), RUNE_C(0x00047E)},
	{RUNE_C(0x000480), RUNE_C(0x000480)},
	{RUNE_C(0x00048A), RUNE_C(0x00048A)},
	{RUNE_C(0x00048C), RUNE_C(0x00048C)},
	{RUNE_C(0x00048E), RUNE_C(0x00048E)},
	{RUNE_C(0x000490), RUNE_C(0x000490)},
	{RUNE_C(0x000492), RUNE_C(0x000492)},
	{RUNE_C(0x000494), RUNE_C(0x000494)},
	{RUNE_C(0x000496), RUNE_C(0x000496)},
	{RUNE_C(0x000498), RUNE_C(0x000498)},
	{RUNE_C(0x00049A), RUNE_C(0x00049A)},
	{RUNE_C(0x00049C), RUNE_C(0x00049C)},
	{RUNE_C(0x00049E), RUNE_C(0x00049E)},
	{RUNE_C(0x0004A0), RUNE_C(0x0004A0)},
	{RUNE_C(0x0004A2), RUNE_C(0x0004A2)},
	{RUNE_C(0x0004A4), RUNE_C(0x0004A4)},
	{RUNE_C(0x0004A6), RUNE_C(0x0004A6)},
	{RUNE_C(0x0004A8), RUNE_C(0x0004A8)},
	{RUNE_C(0x0004AA), RUNE_C(0x0004AA)},
	{RUNE_C(0x0004AC), RUNE_C(0x0004AC)},
	{RUNE_C(0x0004AE), RUNE_C(0x0004AE)},
	{RUNE_C(0x0004B0), RUNE_C(0x0004B0)},
	{RUNE_C(0x0004B2), RUNE_C(0x0004B2)},
	{RUNE_C(0x0004B4), RUNE_C(0x0004B4)},
	{RUNE_C(0x0004B6), RUNE_C(0x0004B6)},
	{RUNE_C(0x0004B8), RUNE_C(0x0004B8)},
	{RUNE_C(0x0004BA), RUNE_C(0x0004BA)},
	{RUNE_C(0x0004BC), RUNE_C(0x0004BC)},
	{RUNE_C(0x0004BE), RUNE_C(0x0004BE)},
	{RUNE_C(0x0004C0), RUNE_C(0x0004C1)},
	{RUNE_C(0x0004C3), RUNE_C(0x0004C3)},
	{RUNE_C(0x0004C5), RUNE_C(0x0004C5)},
	{RUNE_C(0x0004C7), RUNE_C(0x0004C7)},
	{RUNE_C(0x0004C9), RUNE_C(0x0004C9)},
	{RUNE_C(0x0004CB), RUNE_C(0x0004CB)},
	{RUNE_C(0x0004CD), RUNE_C(0x0004CD)},
	{RUNE_C(0x0004D0), RUNE_C(0x0004D0)},
	{RUNE_C(0x0004D2), RUNE_C(0x0004D2)},
	{RUNE_C(0x0004D4), RUNE_C(0x0004D4)},
	{RUNE_C(0x0004D6), RUNE_C(0x0004D6)},
	{RUNE_C(0x0004D8), RUNE_C(0x0004D8)},
	{RUNE_C(0x0004DA), RUNE_C(0x0004DA)},
	{RUNE_C(0x0004DC), RUNE_C(0x0004DC)},
	{RUNE_C(0x0004DE), RUNE_C(0x0004DE)},
	{RUNE_C(0x0004E0), RUNE_C(0x0004E0)},
	{RUNE_C(0x0004E2), RUNE_C(0x0004E2)},
	{RUNE_C(0x0004E4), RUNE_C(0x0004E4)},
	{RUNE_C(0x0004E6), RUNE_C(0x0004E6)},
	{RUNE_C(0x0004E8), RUNE_C(0x0004E8)},
	{RUNE_C(0x0004EA), RUNE_C(0x0004EA)},
	{RUNE_C(0x0004EC), RUNE_C(0x0004EC)},
	{RUNE_C(0x0004EE), RUNE_C(0x0004EE)},
	{RUNE_C(0x0004F0), RUNE_C(0x0004F0)},
	{RUNE_C(0x0004F2), RUNE_C(0x0004F2)},
	{RUNE_C(0x0004F4), RUNE_C(0x0004F4)},
	{RUNE_C(0x0004F6), RUNE_C(0x0004F6)},
	{RUNE_C(0x0004F8), RUNE_C(0x0004F8)},
	{RUNE_C(0x0004FA), RUNE_C(0x0004FA)},
	{RUNE_C(0x0004FC), RUNE_C(0x0004FC)},
	{RUNE_C(0x0004FE), RUNE_C(0x0004FE)},
	{RUNE_C(0x000500), RUNE_C(0x000500)},
	{RUNE_C(0x000502), RUNE_C(0x000502)},
	{RUNE_C(0x000504), RUNE_C(0x000504)},
	{RUNE_C(0x000506), RUNE_C(0x000506)},
	{RUNE_C(0x000508), RUNE_C(0x000508)},
	{RUNE_C(0x00050A), RUNE_C(0x00050A)},
	{RUNE_C(0x00050C), RUNE_C(0x00050C)},
	{RUNE_C(0x00050E), RUNE_C(0x00050E)},
	{RUNE_C(0x000510), RUNE_C(0x000510)},
	{RUNE_C(0x000512), RUNE_C(0x000512)},
	{RUNE_C(0x000514), RUNE_C(0x000514)},
	{RUNE_C(0x000516), RUNE_C(0x000516)},
	{RUNE_C(0x000518), RUNE_C(0x000518)},
	{RUNE_C(0x00051A), RUNE_C(0x00051A)},
	{RUNE_C(0x00051C), RUNE_C(0x00051C)},
	{RUNE_C(0x00051E), RUNE_C(0x00051E)},
	{RUNE_C(0x000520), RUNE_C(0x000520)},
	{RUNE_C(0x000522), RUNE_C(0x000522)},
	{RUNE_C(0x000524), RUNE_C(0x000524)},
	{RUNE_C(0x000526), RUNE_C(0x000526)},
	{RUNE_C(0x000528), RUNE_C(0x000528)},
	{RUNE_C(0x00052A), RUNE_C(0x00052A)},
	{RUNE_C(0x00052C), RUNE_C(0x00052C)},
	{RUNE_C(0x00052E), RUNE_C(0x00052E)},
	{RUNE_C(0x000531), RUNE_C(0x000556)},
	{RUNE_C(0x000587), RUNE_C(0x000587)},
	{RUNE_C(0x00061C), RUNE_C(0x00061C)},
	{RUNE_C(0x000675), RUNE_C(0x000678)},
	{RUNE_C(0x000958), RUNE_C(0x00095F)},
	{RUNE_C(0x0009DC), RUNE_C(0x0009DD)},
	{RUNE_C(0x0009DF), RUNE_C(0x0009DF)},
	{RUNE_C(0x000A33), RUNE_C(0x000A33)},
	{RUNE_C(0x000A36), RUNE_C(0x000A36)},
	{RUNE_C(0x000A59), RUNE_C(0x000A5B)},
	{RUNE_C(0x000A5E), RUNE_C(0x000A5E)},
	{RUNE_C(0x000B5C), RUNE_C(0x000B5D)},
	{RUNE_C(0x000E33), RUNE_C(0x000E33)},
	{RUNE_C(0x000EB3), RUNE_C(0x000EB3)},
	{RUNE_C(0x000EDC), RUNE_C(0x000EDD)},
	{RUNE_C(0x000F0C), RUNE_C(0x000F0C)},
	{RUNE_C(0x000F43), RUNE_C(0x000F43)},
	{RUNE_C(0x000F4D), RUNE_C(0x000F4D)},
	{RUNE_C(0x000F52), RUNE_C(0x000F52)},
	{RUNE_C(0x000F57), RUNE_C(0x000F57)},
	{RUNE_C(0x000F5C), RUNE_C(0x000F5C)},
	{RUNE_C(0x000F69), RUNE_C(0x000F69)},
	{RUNE_C(0x000F73), RUNE_C(0x000F73)},
	{RUNE_C(0x000F75), RUNE_C(0x000F79)},
	{RUNE_C(0x000F81), RUNE_C(0x000F81)},
	{RUNE_C(0x000F93), RUNE_C(0x000F93)},
	{RUNE_C(0x000F9D), RUNE_C(0x000F9D)},
	{RUNE_C(0x000FA2), RUNE_C(0x000FA2)},
	{RUNE_C(0x000FA7), RUNE_C(0x000FA7)},
	{RUNE_C(0x000FAC), RUNE_C(0x000FAC)},
	{RUNE_C(0x000FB9), RUNE_C(0x000FB9)},
	{RUNE_C(0x0010A0), RUNE_C(0x0010C5)},
	{RUNE_C(0x0010C7), RUNE_C(0x0010C7)},
	{RUNE_C(0x0010CD), RUNE_C(0x0010CD)},
	{RUNE_C(0x0010FC), RUNE_C(0x0010FC)},
	{RUNE_C(0x00115F), RUNE_C(0x001160)},
	{RUNE_C(0x0013F8), RUNE_C(0x0013FD)},
	{RUNE_C(0x0017B4), RUNE_C(0x0017B5)},
	{RUNE_C(0x00180B), RUNE_C(0x00180F)},
	{RUNE_C(0x001C80), RUNE_C(0x001C88)},
	{RUNE_C(0x001C90), RUNE_C(0x001CBA)},
	{RUNE_C(0x001CBD), RUNE_C(0x001CBF)},
	{RUNE_C(0x001D2C), RUNE_C(0x001D2E)},
	{RUNE_C(0x001D30), RUNE_C(0x001D3A)},
	{RUNE_C(0x001D3C), RUNE_C(0x001D4D)},
	{RUNE_C(0x001D4F), RUNE_C(0x001D6A)},
	{RUNE_C(0x001D78), RUNE_C(0x001D78)},
	{RUNE_C(0x001D9B), RUNE_C(0x001DBF)},
	{RUNE_C(0x001E00), RUNE_C(0x001E00)},
	{RUNE_C(0x001E02), RUNE_C(0x001E02)},
	{RUNE_C(0x001E04), RUNE_C(0x001E04)},
	{RUNE_C(0x001E06), RUNE_C(0x001E06)},
	{RUNE_C(0x001E08), RUNE_C(0x001E08)},
	{RUNE_C(0x001E0A), RUNE_C(0x001E0A)},
	{RUNE_C(0x001E0C), RUNE_C(0x001E0C)},
	{RUNE_C(0x001E0E), RUNE_C(0x001E0E)},
	{RUNE_C(0x001E10), RUNE_C(0x001E10)},
	{RUNE_C(0x001E12), RUNE_C(0x001E12)},
	{RUNE_C(0x001E14), RUNE_C(0x001E14)},
	{RUNE_C(0x001E16), RUNE_C(0x001E16)},
	{RUNE_C(0x001E18), RUNE_C(0x001E18)},
	{RUNE_C(0x001E1A), RUNE_C(0x001E1A)},
	{RUNE_C(0x001E1C), RUNE_C(0x001E1C)},
	{RUNE_C(0x001E1E), RUNE_C(0x001E1E)},
	{RUNE_C(0x001E20), RUNE_C(0x001E20)},
	{RUNE_C(0x001E22), RUNE_C(0x001E22)},
	{RUNE_C(0x001E24), RUNE_C(0x001E24)},
	{RUNE_C(0x001E26), RUNE_C(0x001E26)},
	{RUNE_C(0x001E28), RUNE_C(0x001E28)},
	{RUNE_C(0x001E2A), RUNE_C(0x001E2A)},
	{RUNE_C(0x001E2C), RUNE_C(0x001E2C)},
	{RUNE_C(0x001E2E), RUNE_C(0x001E2E)},
	{RUNE_C(0x001E30), RUNE_C(0x001E30)},
	{RUNE_C(0x001E32), RUNE_C(0x001E32)},
	{RUNE_C(0x001E34), RUNE_C(0x001E34)},
	{RUNE_C(0x001E36), RUNE_C(0x001E36)},
	{RUNE_C(0x001E38), RUNE_C(0x001E38)},
	{RUNE_C(0x001E3A), RUNE_C(0x001E3A)},
	{RUNE_C(0x001E3C), RUNE_C(0x001E3C)},
	{RUNE_C(0x001E3E), RUNE_C(0x001E3E)},
	{RUNE_C(0x001E40), RUNE_C(0x001E40)},
	{RUNE_C(0x001E42), RUNE_C(0x001E42)},
	{RUNE_C(0x001E44), RUNE_C(0x001E44)},
	{RUNE_C(0x001E46), RUNE_C(0x001E46)},
	{RUNE_C(0x001E48), RUNE_C(0x001E48)},
	{RUNE_C(0x001E4A), RUNE_C(0x001E4A)},
	{RUNE_C(0x001E4C), RUNE_C(0x001E4C)},
	{RUNE_C(0x001E4E), RUNE_C(0x001E4E)},
	{RUNE_C(0x001E50), RUNE_C(0x001E50)},
	{RUNE_C(0x001E52), RUNE_C(0x001E52)},
	{RUNE_C(0x001E54), RUNE_C(0x001E54)},
	{RUNE_C(0x001E56), RUNE_C(0x001E56)},
	{RUNE_C(0x001E58), RUNE_C(0x001E58)},
	{RUNE_C(0x001E5A), RUNE_C(0x001E5A)},
	{RUNE_C(0x001E5C), RUNE_C(0x001E5C)},
	{RUNE_C(0x001E5E), RUNE_C(0x001E5E)},
	{RUNE_C(0x001E60), RUNE_C(0x001E60)},
	{RUNE_C(0x001E62), RUNE_C(0x001E62)},
	{RUNE_C(0x001E64), RUNE_C(0x001E64)},
	{RUNE_C(0x001E66), RUNE_C(0x001E66)},
	{RUNE_C(0x001E68), RUNE_C(0x001E68)},
	{RUNE_C(0x001E6A), RUNE_C(0x001E6A)},
	{RUNE_C(0x001E6C), RUNE_C(0x001E6C)},
	{RUNE_C(0x001E6E), RUNE_C(0x001E6E)},
	{RUNE_C(0x001E70), RUNE_C(0x001E70)},
	{RUNE_C(0x001E72), RUNE_C(0x001E72)},
	{RUNE_C(0x001E74), RUNE_C(0x001E74)},
	{RUNE_C(0x001E76), RUNE_C(0x001E76)},
	{RUNE_C(0x001E78), RUNE_C(0x001E78)},
	{RUNE_C(0x001E7A), RUNE_C(0x001E7A)},
	{RUNE_C(0x001E7C), RUNE_C(0x001E7C)},
	{RUNE_C(0x001E7E), RUNE_C(0x001E7E)},
	{RUNE_C(0x001E80), RUNE_C(0x001E80)},
	{RUNE_C(0x001E82), RUNE_C(0x001E82)},
	{RUNE_C(0x001E84), RUNE_C(0x001E84)},
	{RUNE_C(0x001E86), RUNE_C(0x001E86)},
	{RUNE_C(0x001E88), RUNE_C(0x001E88)},
	{RUNE_C(0x001E8A), RUNE_C(0x001E8A)},
	{RUNE_C(0x001E8C), RUNE_C(0x001E8C)},
	{RUNE_C(0x001E8E), RUNE_C(0x001E8E)},
	{RUNE_C(0x001E90), RUNE_C(0x001E90)},
	{RUNE_C(0x001E92), RUNE_C(0x001E92)},
	{RUNE_C(0x001E94), RUNE_C(0x001E94)},
	{RUNE_C(0x001E9A), RUNE_C(0x001E9B)},
	{RUNE_C(0x001E9E), RUNE_C(0x001E9E)},
	{RUNE_C(0x001EA0), RUNE_C(0x001EA0)},
	{RUNE_C(0x001EA2), RUNE_C(0x001EA2)},
	{RUNE_C(0x001EA4), RUNE_C(0x001EA4)},
	{RUNE_C(0x001EA6), RUNE_C(0x001EA6)},
	{RUNE_C(0x001EA8), RUNE_C(0x001EA8)},
	{RUNE_C(0x001EAA), RUNE_C(0x001EAA)},
	{RUNE_C(0x001EAC), RUNE_C(0x001EAC)},
	{RUNE_C(0x001EAE), RUNE_C(0x001EAE)},
	{RUNE_C(0x001EB0), RUNE_C(0x001EB0)},
	{RUNE_C(0x001EB2), RUNE_C(0x001EB2)},
	{RUNE_C(0x001EB4), RUNE_C(0x001EB4)},
	{RUNE_C(0x001EB6), RUNE_C(0x001EB6)},
	{RUNE_C(0x001EB8), RUNE_C(0x001EB8)},
	{RUNE_C(0x001EBA), RUNE_C(0x001EBA)},
	{RUNE_C(0x001EBC), RUNE_C(0x001EBC)},
	{RUNE_C(0x001EBE), RUNE_C(0x001EBE)},
	{RUNE_C(0x001EC0), RUNE_C(0x001EC0)},
	{RUNE_C(0x001EC2), RUNE_C(0x001EC2)},
	{RUNE_C(0x001EC4), RUNE_C(0x001EC4)},
	{RUNE_C(0x001EC6), RUNE_C(0x001EC6)},
	{RUNE_C(0x001EC8), RUNE_C(0x001EC8)},
	{RUNE_C(0x001ECA), RUNE_C(0x001ECA)},
	{RUNE_C(0x001ECC), RUNE_C(0x001ECC)},
	{RUNE_C(0x001ECE), RUNE_C(0x001ECE)},
	{RUNE_C(0x001ED0), RUNE_C(0x001ED0)},
	{RUNE_C(0x001ED2), RUNE_C(0x001ED2)},
	{RUNE_C(0x001ED4), RUNE_C(0x001ED4)},
	{RUNE_C(0x001ED6), RUNE_C(0x001ED6)},
	{RUNE_C(0x001ED8), RUNE_C(0x001ED8)},
	{RUNE_C(0x001EDA), RUNE_C(0x001EDA)},
	{RUNE_C(0x001EDC), RUNE_C(0x001EDC)},
	{RUNE_C(0x001EDE), RUNE_C(0x001EDE)},
	{RUNE_C(0x001EE0), RUNE_C(0x001EE0)},
	{RUNE_C(0x001EE2), RUNE_C(0x001EE2)},
	{RUNE_C(0x001EE4), RUNE_C(0x001EE4)},
	{RUNE_C(0x001EE6), RUNE_C(0x001EE6)},
	{RUNE_C(0x001EE8), RUNE_C(0x001EE8)},
	{RUNE_C(0x001EEA), RUNE_C(0x001EEA)},
	{RUNE_C(0x001EEC), RUNE_C(0x001EEC)},
	{RUNE_C(0x001EEE), RUNE_C(0x001EEE)},
	{RUNE_C(0x001EF0), RUNE_C(0x001EF0)},
	{RUNE_C(0x001EF2), RUNE_C(0x001EF2)},
	{RUNE_C(0x001EF4), RUNE_C(0x001EF4)},
	{RUNE_C(0x001EF6), RUNE_C(0x001EF6)},
	{RUNE_C(0x001EF8), RUNE_C(0x001EF8)},
	{RUNE_C(0x001EFA), RUNE_C(0x001EFA)},
	{RUNE_C(0x001EFC), RUNE_C(0x001EFC)},
	{RUNE_C(0x001EFE), RUNE_C(0x001EFE)},
	{RUNE_C(0x001F08), RUNE_C(0x001F0F)},
	{RUNE_C(0x001F18), RUNE_C(0x001F1D)},
	{RUNE_C(0x001F28), RUNE_C(0x001F2F)},
	{RUNE_C(0x001F38), RUNE_C(0x001F3F)},
	{RUNE_C(0x001F48), RUNE_C(0x001F4D)},
	{RUNE_C(0x001F59), RUNE_C(0x001F59)},
	{RUNE_C(0x001F5B), RUNE_C(0x001F5B)},
	{RUNE_C(0x001F5D), RUNE_C(0x001F5D)},
	{RUNE_C(0x001F5F), RUNE_C(0x001F5F)},
	{RUNE_C(0x001F68), RUNE_C(0x001F6F)},
	{RUNE_C(0x001F71), RUNE_C(0x001F71)},
	{RUNE_C(0x001F73), RUNE_C(0x001F73)},
	{RUNE_C(0x001F75), RUNE_C(0x001F75)},
	{RUNE_C(0x001F77), RUNE_C(0x001F77)},
	{RUNE_C(0x001F79), RUNE_C(0x001F79)},
	{RUNE_C(0x001F7B), RUNE_C(0x001F7B)},
	{RUNE_C(0x001F7D), RUNE_C(0x001F7D)},
	{RUNE_C(0x001F80), RUNE_C(0x001FAF)},
	{RUNE_C(0x001FB2), RUNE_C(0x001FB4)},
	{RUNE_C(0x001FB7), RUNE_C(0x001FC4)},
	{RUNE_C(0x001FC7), RUNE_C(0x001FCF)},
	{RUNE_C(0x001FD3), RUNE_C(0x001FD3)},
	{RUNE_C(0x001FD8), RUNE_C(0x001FDB)},
	{RUNE_C(0x001FDD), RUNE_C(0x001FDF)},
	{RUNE_C(0x001FE3), RUNE_C(0x001FE3)},
	{RUNE_C(0x001FE8), RUNE_C(0x001FEF)},
	{RUNE_C(0x001FF2), RUNE_C(0x001FF4)},
	{RUNE_C(0x001FF7), RUNE_C(0x001FFE)},
	{RUNE_C(0x002000), RUNE_C(0x00200F)},
	{RUNE_C(0x002011), RUNE_C(0x002011)},
	{RUNE_C(0x002017), RUNE_C(0x002017)},
	{RUNE_C(0x002024), RUNE_C(0x002026)},
	{RUNE_C(0x00202A), RUNE_C(0x00202F)},
	{RUNE_C(0x002033), RUNE_C(0x002034)},
	{RUNE_C(0x002036), RUNE_C(0x002037)},
	{RUNE_C(0x00203C), RUNE_C(0x00203C)},
	{RUNE_C(0x00203E), RUNE_C(0x00203E)},
	{RUNE_C(0x002047), RUNE_C(0x002049)},
	{RUNE_C(0x002057), RUNE_C(0x002057)},
	{RUNE_C(0x00205F), RUNE_C(0x002071)},
	{RUNE_C(0x002074), RUNE_C(0x00208E)},
	{RUNE_C(0x002090), RUNE_C(0x00209C)},
	{RUNE_C(0x0020A8), RUNE_C(0x0020A8)},
	{RUNE_C(0x002100), RUNE_C(0x002103)},
	{RUNE_C(0x002105), RUNE_C(0x002107)},
	{RUNE_C(0x002109), RUNE_C(0x002113)},
	{RUNE_C(0x002115), RUNE_C(0x002116)},
	{RUNE_C(0x002119), RUNE_C(0x00211D)},
	{RUNE_C(0x002120), RUNE_C(0x002122)},
	{RUNE_C(0x002124), RUNE_C(0x002124)},
	{RUNE_C(0x002126), RUNE_C(0x002126)},
	{RUNE_C(0x002128), RUNE_C(0x002128)},
	{RUNE_C(0x00212A), RUNE_C(0x00212D)},
	{RUNE_C(0x00212F), RUNE_C(0x002139)},
	{RUNE_C(0x00213B), RUNE_C(0x002140)},
	{RUNE_C(0x002145), RUNE_C(0x002149)},
	{RUNE_C(0x002150), RUNE_C(0x00217F)},
	{RUNE_C(0x002183), RUNE_C(0x002183)},
	{RUNE_C(0x002189), RUNE_C(0x002189)},
	{RUNE_C(0x00222C), RUNE_C(0x00222D)},
	{RUNE_C(0x00222F), RUNE_C(0x002230)},
	{RUNE_C(0x002329), RUNE_C(0x00232A)},
	{RUNE_C(0x002460), RUNE_C(0x0024EA)},
	{RUNE_C(0x002A0C), RUNE_C(0x002A0C)},
	{RUNE_C(0x002A74), RUNE_C(0x002A76)},
	{RUNE_C(0x002ADC), RUNE_C(0x002ADC)},
	{RUNE_C(0x002C00), RUNE_C(0x002C2F)},
	{RUNE_C(0x002C60), RUNE_C(0x002C60)},
	{RUNE_C(0x002C62), RUNE_C(0x002C64)},
	{RUNE_C(0x002C67), RUNE_C(0x002C67)},
	{RUNE_C(0x002C69), RUNE_C(0x002C69)},
	{RUNE_C(0x002C6B), RUNE_C(0x002C6B)},
	{RUNE_C(0x002C6D), RUNE_C(0x002C70)},
	{RUNE_C(0x002C72), RUNE_C(0x002C72)},
	{RUNE_C(0x002C75), RUNE_C(0x002C75)},
	{RUNE_C(0x002C7C), RUNE_C(0x002C80)},
	{RUNE_C(0x002C82), RUNE_C(0x002C82)},
	{RUNE_C(0x002C84), RUNE_C(0x002C84)},
	{RUNE_C(0x002C86), RUNE_C(0x002C86)},
	{RUNE_C(0x002C88), RUNE_C(0x002C88)},
	{RUNE_C(0x002C8A), RUNE_C(0x002C8A)},
	{RUNE_C(0x002C8C), RUNE_C(0x002C8C)},
	{RUNE_C(0x002C8E), RUNE_C(0x002C8E)},
	{RUNE_C(0x002C90), RUNE_C(0x002C90)},
	{RUNE_C(0x002C92), RUNE_C(0x002C92)},
	{RUNE_C(0x002C94), RUNE_C(0x002C94)},
	{RUNE_C(0x002C96), RUNE_C(0x002C96)},
	{RUNE_C(0x002C98), RUNE_C(0x002C98)},
	{RUNE_C(0x002C9A), RUNE_C(0x002C9A)},
	{RUNE_C(0x002C9C), RUNE_C(0x002C9C)},
	{RUNE_C(0x002C9E), RUNE_C(0x002C9E)},
	{RUNE_C(0x002CA0), RUNE_C(0x002CA0)},
	{RUNE_C(0x002CA2), RUNE_C(0x002CA2)},
	{RUNE_C(0x002CA4), RUNE_C(0x002CA4)},
	{RUNE_C(0x002CA6), RUNE_C(0x002CA6)},
	{RUNE_C(0x002CA8), RUNE_C(0x002CA8)},
	{RUNE_C(0x002CAA), RUNE_C(0x002CAA)},
	{RUNE_C(0x002CAC), RUNE_C(0x002CAC)},
	{RUNE_C(0x002CAE), RUNE_C(0x002CAE)},
	{RUNE_C(0x002CB0), RUNE_C(0x002CB0)},
	{RUNE_C(0x002CB2), RUNE_C(0x002CB2)},
	{RUNE_C(0x002CB4), RUNE_C(0x002CB4)},
	{RUNE_C(0x002CB6), RUNE_C(0x002CB6)},
	{RUNE_C(0x002CB8), RUNE_C(0x002CB8)},
	{RUNE_C(0x002CBA), RUNE_C(0x002CBA)},
	{RUNE_C(0x002CBC), RUNE_C(0x002CBC)},
	{RUNE_C(0x002CBE), RUNE_C(0x002CBE)},
	{RUNE_C(0x002CC0), RUNE_C(0x002CC0)},
	{RUNE_C(0x002CC2), RUNE_C(0x002CC2)},
	{RUNE_C(0x002CC4), RUNE_C(0x002CC4)},
	{RUNE_C(0x002CC6), RUNE_C(0x002CC6)},
	{RUNE_C(0x002CC8), RUNE_C(0x002CC8)},
	{RUNE_C(0x002CCA), RUNE_C(0x002CCA)},
	{RUNE_C(0x002CCC), RUNE_C(0x002CCC)},
	{RUNE_C(0x002CCE), RUNE_C(0x002CCE)},
	{RUNE_C(0x002CD0), RUNE_C(0x002CD0)},
	{RUNE_C(0x002CD2), RUNE_C(0x002CD2)},
	{RUNE_C(0x002CD4), RUNE_C(0x002CD4)},
	{RUNE_C(0x002CD6), RUNE_C(0x002CD6)},
	{RUNE_C(0x002CD8), RUNE_C(0x002CD8)},
	{RUNE_C(0x002CDA), RUNE_C(0x002CDA)},
	{RUNE_C(0x002CDC), RUNE_C(0x002CDC)},
	{RUNE_C(0x002CDE), RUNE_C(0x002CDE)},
	{RUNE_C(0x002CE0), RUNE_C(0x002CE0)},
	{RUNE_C(0x002CE2), RUNE_C(0x002CE2)},
	{RUNE_C(0x002CEB), RUNE_C(0x002CEB)},
	{RUNE_C(0x002CED), RUNE_C(0x002CED)},
	{RUNE_C(0x002CF2), RUNE_C(0x002CF2)},
	{RUNE_C(0x002D6F), RUNE_C(0x002D6F)},
	{RUNE_C(0x002E9F), RUNE_C(0x002E9F)},
	{RUNE_C(0x002EF3), RUNE_C(0x002EF3)},
	{RUNE_C(0x002F00), RUNE_C(0x002FD5)},
	{RUNE_C(0x003000), RUNE_C(0x003000)},
	{RUNE_C(0x003036), RUNE_C(0x003036)},
	{RUNE_C(0x003038), RUNE_C(0x00303A)},
	{RUNE_C(0x00309B), RUNE_C(0x00309C)},
	{RUNE_C(0x00309F), RUNE_C(0x00309F)},
	{RUNE_C(0x0030FF), RUNE_C(0x0030FF)},
	{RUNE_C(0x003131), RUNE_C(0x00318E)},
	{RUNE_C(0x003192), RUNE_C(0x00319F)},
	{RUNE_C(0x003200), RUNE_C(0x00321E)},
	{RUNE_C(0x003220), RUNE_C(0x003247)},
	{RUNE_C(0x003250), RUNE_C(0x00327E)},
	{RUNE_C(0x003280), RUNE_C(0x0033FF)},
	{RUNE_C(0x00A640), RUNE_C(0x00A640)},
	{RUNE_C(0x00A642), RUNE_C(0x00A642)},
	{RUNE_C(0x00A644), RUNE_C(0x00A644)},
	{RUNE_C(0x00A646), RUNE_C(0x00A646)},
	{RUNE_C(0x00A648), RUNE_C(0x00A648)},
	{RUNE_C(0x00A64A), RUNE_C(0x00A64A)},
	{RUNE_C(0x00A64C), RUNE_C(0x00A64C)},
	{RUNE_C(0x00A64E), RUNE_C(0x00A64E)},
	{RUNE_C(0x00A650), RUNE_C(0x00A650)},
	{RUNE_C(0x00A652), RUNE_C(0x00A652)},
	{RUNE_C(0x00A654), RUNE_C(0x00A654)},
	{RUNE_C(0x00A656), RUNE_C(0x00A656)},
	{RUNE_C(0x00A658), RUNE_C(0x00A658)},
	{RUNE_C(0x00A65A), RUNE_C(0x00A65A)},
	{RUNE_C(0x00A65C), RUNE_C(0x00A65C)},
	{RUNE_C(0x00A65E), RUNE_C(0x00A65E)},
	{RUNE_C(0x00A660), RUNE_C(0x00A660)},
	{RUNE_C(0x00A662), RUNE_C(0x00A662)},
	{RUNE_C(0x00A664), RUNE_C(0x00A664)},
	{RUNE_C(0x00A666), RUNE_C(0x00A666)},
	{RUNE_C(0x00A668), RUNE_C(0x00A668)},
	{RUNE_C(0x00A66A), RUNE_C(0x00A66A)},
	{RUNE_C(0x00A66C), RUNE_C(0x00A66C)},
	{RUNE_C(0x00A680), RUNE_C(0x00A680)},
	{RUNE_C(0x00A682), RUNE_C(0x00A682)},
	{RUNE_C(0x00A684), RUNE_C(0x00A684)},
	{RUNE_C(0x00A686), RUNE_C(0x00A686)},
	{RUNE_C(0x00A688), RUNE_C(0x00A688)},
	{RUNE_C(0x00A68A), RUNE_C(0x00A68A)},
	{RUNE_C(0x00A68C), RUNE_C(0x00A68C)},
	{RUNE_C(0x00A68E), RUNE_C(0x00A68E)},
	{RUNE_C(0x00A690), RUNE_C(0x00A690)},
	{RUNE_C(0x00A692), RUNE_C(0x00A692)},
	{RUNE_C(0x00A694), RUNE_C(0x00A694)},
	{RUNE_C(0x00A696), RUNE_C(0x00A696)},
	{RUNE_C(0x00A698), RUNE_C(0x00A698)},
	{RUNE_C(0x00A69A), RUNE_C(0x00A69A)},
	{RUNE_C(0x00A69C), RUNE_C(0x00A69D)},
	{RUNE_C(0x00A722), RUNE_C(0x00A722)},
	{RUNE_C(0x00A724), RUNE_C(0x00A724)},
	{RUNE_C(0x00A726), RUNE_C(0x00A726)},
	{RUNE_C(0x00A728), RUNE_C(0x00A728)},
	{RUNE_C(0x00A72A), RUNE_C(0x00A72A)},
	{RUNE_C(0x00A72C), RUNE_C(0x00A72C)},
	{RUNE_C(0x00A72E), RUNE_C(0x00A72E)},
	{RUNE_C(0x00A732), RUNE_C(0x00A732)},
	{RUNE_C(0x00A734), RUNE_C(0x00A734)},
	{RUNE_C(0x00A736), RUNE_C(0x00A736)},
	{RUNE_C(0x00A738), RUNE_C(0x00A738)},
	{RUNE_C(0x00A73A), RUNE_C(0x00A73A)},
	{RUNE_C(0x00A73C), RUNE_C(0x00A73C)},
	{RUNE_C(0x00A73E), RUNE_C(0x00A73E)},
	{RUNE_C(0x00A740), RUNE_C(0x00A740)},
	{RUNE_C(0x00A742), RUNE_C(0x00A742)},
	{RUNE_C(0x00A744), RUNE_C(0x00A744)},
	{RUNE_C(0x00A746), RUNE_C(0x00A746)},
	{RUNE_C(0x00A748), RUNE_C(0x00A748)},
	{RUNE_C(0x00A74A), RUNE_C(0x00A74A)},
	{RUNE_C(0x00A74C), RUNE_C(0x00A74C)},
	{RUNE_C(0x00A74E), RUNE_C(0x00A74E)},
	{RUNE_C(0x00A750), RUNE_C(0x00A750)},
	{RUNE_C(0x00A752), RUNE_C(0x00A752)},
	{RUNE_C(0x00A754), RUNE_C(0x00A754)},
	{RUNE_C(0x00A756), RUNE_C(0x00A756)},
	{RUNE_C(0x00A758), RUNE_C(0x00A758)},
	{RUNE_C(0x00A75A), RUNE_C(0x00A75A)},
	{RUNE_C(0x00A75C), RUNE_C(0x00A75C)},
	{RUNE_C(0x00A75E), RUNE_C(0x00A75E)},
	{RUNE_C(0x00A760), RUNE_C(0x00A760)},
	{RUNE_C(0x00A762), RUNE_C(0x00A762)},
	{RUNE_C(0x00A764), RUNE_C(0x00A764)},
	{RUNE_C(0x00A766), RUNE_C(0x00A766)},
	{RUNE_C(0x00A768), RUNE_C(0x00A768)},
	{RUNE_C(0x00A76A), RUNE_C(0x00A76A)},
	{RUNE_C(0x00A76C), RUNE_C(0x00A76C)},
	{RUNE_C(0x00A76E), RUNE_C(0x00A76E)},
	{RUNE_C(0x00A770), RUNE_C(0x00A770)},
	{RUNE_C(0x00A779), RUNE_C(0x00A779)},
	{RUNE_C(0x00A77B), RUNE_C(0x00A77B)},
	{RUNE_C(0x00A77D), RUNE_C(0x00A77E)},
	{RUNE_C(0x00A780), RUNE_C(0x00A780)},
	{RUNE_C(0x00A782), RUNE_C(0x00A782)},
	{RUNE_C(0x00A784), RUNE_C(0x00A784)},
	{RUNE_C(0x00A786), RUNE_C(0x00A786)},
	{RUNE_C(0x00A78B), RUNE_C(0x00A78B)},
	{RUNE_C(0x00A78D), RUNE_C(0x00A78D)},
	{RUNE_C(0x00A790), RUNE_C(0x00A790)},
	{RUNE_C(0x00A792), RUNE_C(0x00A792)},
	{RUNE_C(0x00A796), RUNE_C(0x00A796)},
	{RUNE_C(0x00A798), RUNE_C(0x00A798)},
	{RUNE_C(0x00A79A), RUNE_C(0x00A79A)},
	{RUNE_C(0x00A79C), RUNE_C(0x00A79C)},
	{RUNE_C(0x00A79E), RUNE_C(0x00A79E)},
	{RUNE_C(0x00A7A0), RUNE_C(0x00A7A0)},
	{RUNE_C(0x00A7A2), RUNE_C(0x00A7A2)},
	{RUNE_C(0x00A7A4), RUNE_C(0x00A7A4)},
	{RUNE_C(0x00A7A6), RUNE_C(0x00A7A6)},
	{RUNE_C(0x00A7A8), RUNE_C(0x00A7A8)},
	{RUNE_C(0x00A7AA), RUNE_C(0x00A7AE)},
	{RUNE_C(0x00A7B0), RUNE_C(0x00A7B4)},
	{RUNE_C(0x00A7B6), RUNE_C(0x00A7B6)},
	{RUNE_C(0x00A7B8), RUNE_C(0x00A7B8)},
	{RUNE_C(0x00A7BA), RUNE_C(0x00A7BA)},
	{RUNE_C(0x00A7BC), RUNE_C(0x00A7BC)},
	{RUNE_C(0x00A7BE), RUNE_C(0x00A7BE)},
	{RUNE_C(0x00A7C0), RUNE_C(0x00A7C0)},
	{RUNE_C(0x00A7C2), RUNE_C(0x00A7C2)},
	{RUNE_C(0x00A7C4), RUNE_C(0x00A7C7)},
	{RUNE_C(0x00A7C9), RUNE_C(0x00A7C9)},
	{RUNE_C(0x00A7D0), RUNE_C(0x00A7D0)},
	{RUNE_C(0x00A7D6), RUNE_C(0x00A7D6)},
	{RUNE_C(0x00A7D8), RUNE_C(0x00A7D8)},
	{RUNE_C(0x00A7F2), RUNE_C(0x00A7F5)},
	{RUNE_C(0x00A7F8), RUNE_C(0x00A7F9)},
	{RUNE_C(0x00AB5C), RUNE_C(0x00AB5F)},
	{RUNE_C(0x00AB69), RUNE_C(0x00AB69)},
	{RUNE_C(0x00AB70), RUNE_C(0x00ABBF)},
	{RUNE_C(0x00F900), RUNE_C(0x00FA0D)},
	{RUNE_C(0x00FA10), RUNE_C(0x00FA10)},
	{RUNE_C(0x00FA12), RUNE_C(0x00FA12)},
	{RUNE_C(0x00FA15), RUNE_C(0x00FA1E)},
	{RUNE_C(0x00FA20), RUNE_C(0x00FA20)},
	{RUNE_C(0x00FA22), RUNE_C(0x00FA22)},
	{RUNE_C(0x00FA25), RUNE_C(0x00FA26)},
	{RUNE_C(0x00FA2A), RUNE_C(0x00FA6D)},
	{RUNE_C(0x00FA70), RUNE_C(0x00FAD9)},
	{RUNE_C(0x00FB00), RUNE_C(0x00FB06)},
	{RUNE_C(0x00FB13), RUNE_C(0x00FB17)},
	{RUNE_C(0x00FB1D), RUNE_C(0x00FB1D)},
	{RUNE_C(0x00FB1F), RUNE_C(0x00FB36)},
	{RUNE_C(0x00FB38), RUNE_C(0x00FB3C)},
	{RUNE_C(0x00FB3E), RUNE_C(0x00FB3E)},
	{RUNE_C(0x00FB40), RUNE_C(0x00FB41)},
	{RUNE_C(0x00FB43), RUNE_C(0x00FB44)},
	{RUNE_C(0x00FB46), RUNE_C(0x00FBB1)},
	{RUNE_C(0x00FBD3), RUNE_C(0x00FD3D)},
	{RUNE_C(0x00FD50), RUNE_C(0x00FD8F)},
	{RUNE_C(0x00FD92), RUNE_C(0x00FDC7)},
	{RUNE_C(0x00FDF0), RUNE_C(0x00FDFC)},
	{RUNE_C(0x00FE00), RUNE_C(0x00FE19)},
	{RUNE_C(0x00FE30), RUNE_C(0x00FE44)},
	{RUNE_C(0x00FE47), RUNE_C(0x00FE52)},
	{RUNE_C(0x00FE54), RUNE_C(0x00FE66)},
	{RUNE_C(0x00FE68), RUNE_C(0x00FE6B)},
	{RUNE_C(0x00FE70), RUNE_C(0x00FE72)},
	{RUNE_C(0x00FE74), RUNE_C(0x00FE74)},
	{RUNE_C(0x00FE76), RUNE_C(0x00FEFC)},
	{RUNE_C(0x00FEFF), RUNE_C(0x00FEFF)},
	{RUNE_C(0x00FF01), RUNE_C(0x00FFBE)},
	{RUNE_C(0x00FFC2), RUNE_C(0x00FFC7)},
	{RUNE_C(0x00FFCA), RUNE_C(0x00FFCF)},
	{RUNE_C(0x00FFD2), RUNE_C(0x00FFD7)},
	{RUNE_C(0x00FFDA), RUNE_C(0x00FFDC)},
	{RUNE_C(0x00FFE0), RUNE_C(0x00FFE6)},
	{RUNE_C(0x00FFE8), RUNE_C(0x00FFEE)},
	{RUNE_C(0x00FFF0), RUNE_C(0x00FFF8)},
	{RUNE_C(0x010400), RUNE_C(0x010427)},
	{RUNE_C(0x0104B0), RUNE_C(0x0104D3)},
	{RUNE_C(0x010570), RUNE_C(0x01057A)},
	{RUNE_C(0x01057C), RUNE_C(0x01058A)},
	{RUNE_C(0x01058C), RUNE_C(0x010592)},
	{RUNE_C(0x010594), RUNE_C(0x010595)},
	{RUNE_C(0x010781), RUNE_C(0x010785)},
	{RUNE_C(0x010787), RUNE_C(0x0107B0)},
	{RUNE_C(0x0107B2), RUNE_C(0x0107BA)},
	{RUNE_C(0x010C80), RUNE_C(0x010CB2)},
	{RUNE_C(0x0118A0), RUNE_C(0x0118BF)},
	{RUNE_C(0x016E40), RUNE_C(0x016E5F)},
	{RUNE_C(0x01BCA0), RUNE_C(0x01BCA3)},
	{RUNE_C(0x01D15E), RUNE_C(0x01D164)},
	{RUNE_C(0x01D173), RUNE_C(0x01D17A)},
	{RUNE_C(0x01D1BB), RUNE_C(0x01D1C0)},
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
	{RUNE_C(0x01D6A8), RUNE_C(0x01D7CB)},
	{RUNE_C(0x01D7CE), RUNE_C(0x01D7FF)},
	{RUNE_C(0x01E030), RUNE_C(0x01E06D)},
	{RUNE_C(0x01E900), RUNE_C(0x01E921)},
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
	{RUNE_C(0x01F100), RUNE_C(0x01F10A)},
	{RUNE_C(0x01F110), RUNE_C(0x01F12E)},
	{RUNE_C(0x01F130), RUNE_C(0x01F14F)},
	{RUNE_C(0x01F16A), RUNE_C(0x01F16C)},
	{RUNE_C(0x01F190), RUNE_C(0x01F190)},
	{RUNE_C(0x01F200), RUNE_C(0x01F202)},
	{RUNE_C(0x01F210), RUNE_C(0x01F23B)},
	{RUNE_C(0x01F240), RUNE_C(0x01F248)},
	{RUNE_C(0x01F250), RUNE_C(0x01F251)},
	{RUNE_C(0x01FBF0), RUNE_C(0x01FBF9)},
	{RUNE_C(0x02F800), RUNE_C(0x02FA1D)},
	{RUNE_C(0x0E0000), RUNE_C(0x0E0FFF)},
};

#define TYPE      bool
#define TABLE     lookup_tbl
#define DEFAULT   false
#define HAS_VALUE 0
#include "internal/rtype/lookup-func.h"

bool
rprop_is_cwkcf(rune ch)
{
	return ch <= LATIN1_MAX ? BSCHK(bitset, ch) : lookup(ch);
}
