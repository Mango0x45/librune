/* This file is autogenerated by gen/rtype-nt; DO NOT EDIT. */

#ifndef RUNE_INTERNAL_RTYPE_NT_H
#define RUNE_INTERNAL_RTYPE_NT_H

/* IWYU pragma: private */
/* clang-format off */

#include "../types.h"
#include "../../rtype.h"

static const numeric_type_bf rtype_nt_lat1_tbl[] = {
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	NT_DECIMAL, NT_DECIMAL, NT_DECIMAL, NT_DECIMAL, NT_DECIMAL, NT_DECIMAL, NT_DECIMAL, NT_DECIMAL,
	NT_DECIMAL, NT_DECIMAL,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,   NT_DIGIT,   NT_DIGIT,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,   NT_DIGIT,    NT_NONE,    NT_NONE, NT_NUMERIC, NT_NUMERIC, NT_NUMERIC,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
	   NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,    NT_NONE,
};

static const struct {
	rune lo, hi;
	numeric_type_bf val;
} rtype_nt_tbl[] = {
	{0x000030, 0x000039, NT_DECIMAL},
	{0x0000B2, 0x0000B3, NT_DIGIT},
	{0x0000B9, 0x0000B9, NT_DIGIT},
	{0x0000BC, 0x0000BE, NT_NUMERIC},
	{0x000660, 0x000669, NT_DECIMAL},
	{0x0006F0, 0x0006F9, NT_DECIMAL},
	{0x0007C0, 0x0007C9, NT_DECIMAL},
	{0x000966, 0x00096F, NT_DECIMAL},
	{0x0009E6, 0x0009EF, NT_DECIMAL},
	{0x0009F4, 0x0009F9, NT_NUMERIC},
	{0x000A66, 0x000A6F, NT_DECIMAL},
	{0x000AE6, 0x000AEF, NT_DECIMAL},
	{0x000B66, 0x000B6F, NT_DECIMAL},
	{0x000B72, 0x000B77, NT_NUMERIC},
	{0x000BE6, 0x000BEF, NT_DECIMAL},
	{0x000BF0, 0x000BF2, NT_NUMERIC},
	{0x000C66, 0x000C6F, NT_DECIMAL},
	{0x000C78, 0x000C7E, NT_NUMERIC},
	{0x000CE6, 0x000CEF, NT_DECIMAL},
	{0x000D58, 0x000D5E, NT_NUMERIC},
	{0x000D66, 0x000D6F, NT_DECIMAL},
	{0x000D70, 0x000D78, NT_NUMERIC},
	{0x000DE6, 0x000DEF, NT_DECIMAL},
	{0x000E50, 0x000E59, NT_DECIMAL},
	{0x000ED0, 0x000ED9, NT_DECIMAL},
	{0x000F20, 0x000F29, NT_DECIMAL},
	{0x000F2A, 0x000F33, NT_NUMERIC},
	{0x001040, 0x001049, NT_DECIMAL},
	{0x001090, 0x001099, NT_DECIMAL},
	{0x001369, 0x001371, NT_DIGIT},
	{0x001372, 0x00137C, NT_NUMERIC},
	{0x0016EE, 0x0016F0, NT_NUMERIC},
	{0x0017E0, 0x0017E9, NT_DECIMAL},
	{0x0017F0, 0x0017F9, NT_NUMERIC},
	{0x001810, 0x001819, NT_DECIMAL},
	{0x001946, 0x00194F, NT_DECIMAL},
	{0x0019D0, 0x0019D9, NT_DECIMAL},
	{0x0019DA, 0x0019DA, NT_DIGIT},
	{0x001A80, 0x001A89, NT_DECIMAL},
	{0x001A90, 0x001A99, NT_DECIMAL},
	{0x001B50, 0x001B59, NT_DECIMAL},
	{0x001BB0, 0x001BB9, NT_DECIMAL},
	{0x001C40, 0x001C49, NT_DECIMAL},
	{0x001C50, 0x001C59, NT_DECIMAL},
	{0x002070, 0x002070, NT_DIGIT},
	{0x002074, 0x002079, NT_DIGIT},
	{0x002080, 0x002089, NT_DIGIT},
	{0x002150, 0x002182, NT_NUMERIC},
	{0x002185, 0x002189, NT_NUMERIC},
	{0x002460, 0x002468, NT_DIGIT},
	{0x002469, 0x002473, NT_NUMERIC},
	{0x002474, 0x00247C, NT_DIGIT},
	{0x00247D, 0x002487, NT_NUMERIC},
	{0x002488, 0x002490, NT_DIGIT},
	{0x002491, 0x00249B, NT_NUMERIC},
	{0x0024EA, 0x0024EA, NT_DIGIT},
	{0x0024EB, 0x0024F4, NT_NUMERIC},
	{0x0024F5, 0x0024FD, NT_DIGIT},
	{0x0024FE, 0x0024FE, NT_NUMERIC},
	{0x0024FF, 0x0024FF, NT_DIGIT},
	{0x002776, 0x00277E, NT_DIGIT},
	{0x00277F, 0x00277F, NT_NUMERIC},
	{0x002780, 0x002788, NT_DIGIT},
	{0x002789, 0x002789, NT_NUMERIC},
	{0x00278A, 0x002792, NT_DIGIT},
	{0x002793, 0x002793, NT_NUMERIC},
	{0x002CFD, 0x002CFD, NT_NUMERIC},
	{0x003007, 0x003007, NT_NUMERIC},
	{0x003021, 0x003029, NT_NUMERIC},
	{0x003038, 0x00303A, NT_NUMERIC},
	{0x003192, 0x003195, NT_NUMERIC},
	{0x003220, 0x003229, NT_NUMERIC},
	{0x003248, 0x00324F, NT_NUMERIC},
	{0x003251, 0x00325F, NT_NUMERIC},
	{0x003280, 0x003289, NT_NUMERIC},
	{0x0032B1, 0x0032BF, NT_NUMERIC},
	{0x003405, 0x003405, NT_NUMERIC},
	{0x003483, 0x003483, NT_NUMERIC},
	{0x00382A, 0x00382A, NT_NUMERIC},
	{0x003B4D, 0x003B4D, NT_NUMERIC},
	{0x004E00, 0x004E00, NT_NUMERIC},
	{0x004E03, 0x004E03, NT_NUMERIC},
	{0x004E07, 0x004E07, NT_NUMERIC},
	{0x004E09, 0x004E09, NT_NUMERIC},
	{0x004E24, 0x004E24, NT_NUMERIC},
	{0x004E5D, 0x004E5D, NT_NUMERIC},
	{0x004E8C, 0x004E8C, NT_NUMERIC},
	{0x004E94, 0x004E94, NT_NUMERIC},
	{0x004E96, 0x004E96, NT_NUMERIC},
	{0x004EAC, 0x004EAC, NT_NUMERIC},
	{0x004EBF, 0x004EC0, NT_NUMERIC},
	{0x004EDF, 0x004EDF, NT_NUMERIC},
	{0x004EE8, 0x004EE8, NT_NUMERIC},
	{0x004F0D, 0x004F0D, NT_NUMERIC},
	{0x004F70, 0x004F70, NT_NUMERIC},
	{0x004FE9, 0x004FE9, NT_NUMERIC},
	{0x005006, 0x005006, NT_NUMERIC},
	{0x005104, 0x005104, NT_NUMERIC},
	{0x005146, 0x005146, NT_NUMERIC},
	{0x005169, 0x005169, NT_NUMERIC},
	{0x00516B, 0x00516B, NT_NUMERIC},
	{0x00516D, 0x00516D, NT_NUMERIC},
	{0x005341, 0x005341, NT_NUMERIC},
	{0x005343, 0x005345, NT_NUMERIC},
	{0x00534C, 0x00534C, NT_NUMERIC},
	{0x0053C1, 0x0053C4, NT_NUMERIC},
	{0x0056DB, 0x0056DB, NT_NUMERIC},
	{0x0058F1, 0x0058F1, NT_NUMERIC},
	{0x0058F9, 0x0058F9, NT_NUMERIC},
	{0x005E7A, 0x005E7A, NT_NUMERIC},
	{0x005EFE, 0x005EFF, NT_NUMERIC},
	{0x005F0C, 0x005F0E, NT_NUMERIC},
	{0x005F10, 0x005F10, NT_NUMERIC},
	{0x0062D0, 0x0062D0, NT_NUMERIC},
	{0x0062FE, 0x0062FE, NT_NUMERIC},
	{0x00634C, 0x00634C, NT_NUMERIC},
	{0x0067D2, 0x0067D2, NT_NUMERIC},
	{0x006D1E, 0x006D1E, NT_NUMERIC},
	{0x006F06, 0x006F06, NT_NUMERIC},
	{0x007396, 0x007396, NT_NUMERIC},
	{0x00767E, 0x00767E, NT_NUMERIC},
	{0x007695, 0x007695, NT_NUMERIC},
	{0x0079ED, 0x0079ED, NT_NUMERIC},
	{0x008086, 0x008086, NT_NUMERIC},
	{0x00842C, 0x00842C, NT_NUMERIC},
	{0x008CAE, 0x008CAE, NT_NUMERIC},
	{0x008CB3, 0x008CB3, NT_NUMERIC},
	{0x008D30, 0x008D30, NT_NUMERIC},
	{0x00920E, 0x00920E, NT_NUMERIC},
	{0x0094A9, 0x0094A9, NT_NUMERIC},
	{0x009621, 0x009621, NT_NUMERIC},
	{0x009646, 0x009646, NT_NUMERIC},
	{0x00964C, 0x00964C, NT_NUMERIC},
	{0x009678, 0x009678, NT_NUMERIC},
	{0x0096F6, 0x0096F6, NT_NUMERIC},
	{0x00A620, 0x00A629, NT_DECIMAL},
	{0x00A6E6, 0x00A6EF, NT_NUMERIC},
	{0x00A830, 0x00A835, NT_NUMERIC},
	{0x00A8D0, 0x00A8D9, NT_DECIMAL},
	{0x00A900, 0x00A909, NT_DECIMAL},
	{0x00A9D0, 0x00A9D9, NT_DECIMAL},
	{0x00A9F0, 0x00A9F9, NT_DECIMAL},
	{0x00AA50, 0x00AA59, NT_DECIMAL},
	{0x00ABF0, 0x00ABF9, NT_DECIMAL},
	{0x00F96B, 0x00F96B, NT_NUMERIC},
	{0x00F973, 0x00F973, NT_NUMERIC},
	{0x00F978, 0x00F978, NT_NUMERIC},
	{0x00F9B2, 0x00F9B2, NT_NUMERIC},
	{0x00F9D1, 0x00F9D1, NT_NUMERIC},
	{0x00F9D3, 0x00F9D3, NT_NUMERIC},
	{0x00F9FD, 0x00F9FD, NT_NUMERIC},
	{0x00FF10, 0x00FF19, NT_DECIMAL},
	{0x010107, 0x010133, NT_NUMERIC},
	{0x010140, 0x010178, NT_NUMERIC},
	{0x01018A, 0x01018B, NT_NUMERIC},
	{0x0102E1, 0x0102FB, NT_NUMERIC},
	{0x010320, 0x010323, NT_NUMERIC},
	{0x010341, 0x010341, NT_NUMERIC},
	{0x01034A, 0x01034A, NT_NUMERIC},
	{0x0103D1, 0x0103D5, NT_NUMERIC},
	{0x0104A0, 0x0104A9, NT_DECIMAL},
	{0x010858, 0x01085F, NT_NUMERIC},
	{0x010879, 0x01087F, NT_NUMERIC},
	{0x0108A7, 0x0108AF, NT_NUMERIC},
	{0x0108FB, 0x0108FF, NT_NUMERIC},
	{0x010916, 0x01091B, NT_NUMERIC},
	{0x0109BC, 0x0109BD, NT_NUMERIC},
	{0x0109C0, 0x0109CF, NT_NUMERIC},
	{0x0109D2, 0x0109FF, NT_NUMERIC},
	{0x010A40, 0x010A43, NT_DIGIT},
	{0x010A44, 0x010A48, NT_NUMERIC},
	{0x010A7D, 0x010A7E, NT_NUMERIC},
	{0x010A9D, 0x010A9F, NT_NUMERIC},
	{0x010AEB, 0x010AEF, NT_NUMERIC},
	{0x010B58, 0x010B5F, NT_NUMERIC},
	{0x010B78, 0x010B7F, NT_NUMERIC},
	{0x010BA9, 0x010BAF, NT_NUMERIC},
	{0x010CFA, 0x010CFF, NT_NUMERIC},
	{0x010D30, 0x010D39, NT_DECIMAL},
	{0x010E60, 0x010E68, NT_DIGIT},
	{0x010E69, 0x010E7E, NT_NUMERIC},
	{0x010F1D, 0x010F26, NT_NUMERIC},
	{0x010F51, 0x010F54, NT_NUMERIC},
	{0x010FC5, 0x010FCB, NT_NUMERIC},
	{0x011052, 0x01105A, NT_DIGIT},
	{0x01105B, 0x011065, NT_NUMERIC},
	{0x011066, 0x01106F, NT_DECIMAL},
	{0x0110F0, 0x0110F9, NT_DECIMAL},
	{0x011136, 0x01113F, NT_DECIMAL},
	{0x0111D0, 0x0111D9, NT_DECIMAL},
	{0x0111E1, 0x0111F4, NT_NUMERIC},
	{0x0112F0, 0x0112F9, NT_DECIMAL},
	{0x011450, 0x011459, NT_DECIMAL},
	{0x0114D0, 0x0114D9, NT_DECIMAL},
	{0x011650, 0x011659, NT_DECIMAL},
	{0x0116C0, 0x0116C9, NT_DECIMAL},
	{0x011730, 0x011739, NT_DECIMAL},
	{0x01173A, 0x01173B, NT_NUMERIC},
	{0x0118E0, 0x0118E9, NT_DECIMAL},
	{0x0118EA, 0x0118F2, NT_NUMERIC},
	{0x011950, 0x011959, NT_DECIMAL},
	{0x011C50, 0x011C59, NT_DECIMAL},
	{0x011C5A, 0x011C6C, NT_NUMERIC},
	{0x011D50, 0x011D59, NT_DECIMAL},
	{0x011DA0, 0x011DA9, NT_DECIMAL},
	{0x011F50, 0x011F59, NT_DECIMAL},
	{0x011FC0, 0x011FD4, NT_NUMERIC},
	{0x012400, 0x01246E, NT_NUMERIC},
	{0x016A60, 0x016A69, NT_DECIMAL},
	{0x016AC0, 0x016AC9, NT_DECIMAL},
	{0x016B50, 0x016B59, NT_DECIMAL},
	{0x016B5B, 0x016B61, NT_NUMERIC},
	{0x016E80, 0x016E96, NT_NUMERIC},
	{0x01D2C0, 0x01D2D3, NT_NUMERIC},
	{0x01D2E0, 0x01D2F3, NT_NUMERIC},
	{0x01D360, 0x01D378, NT_NUMERIC},
	{0x01D7CE, 0x01D7FF, NT_DECIMAL},
	{0x01E140, 0x01E149, NT_DECIMAL},
	{0x01E2F0, 0x01E2F9, NT_DECIMAL},
	{0x01E4F0, 0x01E4F9, NT_DECIMAL},
	{0x01E8C7, 0x01E8CF, NT_NUMERIC},
	{0x01E950, 0x01E959, NT_DECIMAL},
	{0x01EC71, 0x01ECAB, NT_NUMERIC},
	{0x01ECAD, 0x01ECAF, NT_NUMERIC},
	{0x01ECB1, 0x01ECB4, NT_NUMERIC},
	{0x01ED01, 0x01ED2D, NT_NUMERIC},
	{0x01ED2F, 0x01ED3D, NT_NUMERIC},
	{0x01F100, 0x01F10A, NT_DIGIT},
	{0x01F10B, 0x01F10C, NT_NUMERIC},
	{0x01FBF0, 0x01FBF9, NT_DECIMAL},
	{0x020001, 0x020001, NT_NUMERIC},
	{0x020064, 0x020064, NT_NUMERIC},
	{0x0200E2, 0x0200E2, NT_NUMERIC},
	{0x020121, 0x020121, NT_NUMERIC},
	{0x02092A, 0x02092A, NT_NUMERIC},
	{0x020983, 0x020983, NT_NUMERIC},
	{0x02098C, 0x02098C, NT_NUMERIC},
	{0x02099C, 0x02099C, NT_NUMERIC},
	{0x020AEA, 0x020AEA, NT_NUMERIC},
	{0x020AFD, 0x020AFD, NT_NUMERIC},
	{0x020B19, 0x020B19, NT_NUMERIC},
	{0x022390, 0x022390, NT_NUMERIC},
	{0x022998, 0x022998, NT_NUMERIC},
	{0x023B1B, 0x023B1B, NT_NUMERIC},
	{0x02626D, 0x02626D, NT_NUMERIC},
	{0x02F890, 0x02F890, NT_NUMERIC},
};

#endif /* !RUNE_INTERNAL_RTYPE_NT_H */
