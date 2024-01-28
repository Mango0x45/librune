#ifndef RUNE_RTYPE_H
#define RUNE_RTYPE_H

#include <stdint.h>

#include "internal/types.h"

typedef enum [[clang::flag_enum]] : uint_fast32_t {
	UC_CN = 0,                 /* Not Assigned */
	UC_CC = UINT32_C(1) << 0,  /* Control */
	UC_CF = UINT32_C(1) << 1,  /* Format */
	UC_CO = UINT32_C(1) << 2,  /* Private Use */
	UC_CS = UINT32_C(1) << 3,  /* Surrogate */
	UC_LL = UINT32_C(1) << 4,  /* Lowercase Letter */
	UC_LM = UINT32_C(1) << 5,  /* Modifier Letter */
	UC_LO = UINT32_C(1) << 6,  /* Other Letter */
	UC_LT = UINT32_C(1) << 7,  /* Titlecase Letter */
	UC_LU = UINT32_C(1) << 8,  /* Uppercase Letter */
	UC_MC = UINT32_C(1) << 9,  /* Spacing Mark */
	UC_ME = UINT32_C(1) << 10, /* Enclosing Mark */
	UC_MN = UINT32_C(1) << 11, /* Nonspacing Mark */
	UC_ND = UINT32_C(1) << 12, /* Decimal Number */
	UC_NL = UINT32_C(1) << 13, /* Letter Number */
	UC_NO = UINT32_C(1) << 14, /* Other Number */
	UC_PC = UINT32_C(1) << 15, /* Connector Punctuation */
	UC_PD = UINT32_C(1) << 16, /* Dash Punctuation */
	UC_PE = UINT32_C(1) << 17, /* Close Punctuation */
	UC_PF = UINT32_C(1) << 18, /* Final Punctuation */
	UC_PI = UINT32_C(1) << 19, /* Initial Punctuation */
	UC_PO = UINT32_C(1) << 20, /* Other Punctuation */
	UC_PS = UINT32_C(1) << 21, /* Open Punctuation */
	UC_SC = UINT32_C(1) << 22, /* Currency Symbol */
	UC_SK = UINT32_C(1) << 23, /* Modifier Symbol */
	UC_SM = UINT32_C(1) << 24, /* Math Symbol */
	UC_SO = UINT32_C(1) << 25, /* Other Symbol */
	UC_ZL = UINT32_C(1) << 26, /* Line Separator */
	UC_ZP = UINT32_C(1) << 27, /* Paragraph Separator */
	UC_ZS = UINT32_C(1) << 28, /* Space Separator */

	UC_LC = UC_LU | UC_LL | UC_LT, /* Cased Letter */

	UC_C = UC_CC | UC_CF | UC_CN | UC_CO | UC_CS, /* Other */
	UC_L = UC_LL | UC_LM | UC_LO | UC_LT | UC_LU, /* Letter */
	UC_M = UC_MC | UC_ME | UC_MN,                 /* Mark */
	UC_N = UC_ND | UC_NL | UC_NO,                 /* Number */
	UC_S = UC_SC | UC_SK | UC_SM | UC_SO,         /* Symbol */
	UC_Z = UC_ZL | UC_ZP | UC_ZS,                 /* Separator */
	UC_P = UC_PC | UC_PD | UC_PE | UC_PF | UC_PI  /* Punctuation */
	     | UC_PO | UC_PS,
} unicat;

[[unsequenced]] bool runeisc(rune, unicat);
[[unsequenced]] bool runeisp(rune, uniprop);
#define runeis(ch, bm) \
	_Generic((bm), unicat: runeisc, uniprop: runeisp)((ch), (bm))

[[unsequenced]] bool riscntrl(rune);
[[unsequenced]] bool risdigit(rune);
[[unsequenced]] bool risgraph(rune);
[[unsequenced]] bool rislower(rune);
[[unsequenced]] bool rismark(rune);
[[unsequenced]] bool risnumber(rune);
[[unsequenced]] bool rispunct(rune);
[[unsequenced]] bool risspace(rune);
[[unsequenced]] bool rissymbol(rune);
[[unsequenced]] bool ristitle(rune);
[[unsequenced]] bool risupper(rune);

#endif /* !RUNE_RTYPE_H */
