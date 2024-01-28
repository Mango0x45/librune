#ifndef RUNE_RTYPE_H
#define RUNE_RTYPE_H

#include <stdint.h>

#include "internal/types.h"

/* clang-format off */
typedef enum [[clang::flag_enum]] : uint_fast32_t {
	UC_CN = 0,                 /* Not Assigned */
	UC_CC = UINT32_C(1) <<  0, /* Control */
	UC_CF = UINT32_C(1) <<  1, /* Format */
	UC_CO = UINT32_C(1) <<  2, /* Private Use */
	UC_CS = UINT32_C(1) <<  3, /* Surrogate */
	UC_LL = UINT32_C(1) <<  4, /* Lowercase Letter */
	UC_LM = UINT32_C(1) <<  5, /* Modifier Letter */
	UC_LO = UINT32_C(1) <<  6, /* Other Letter */
	UC_LT = UINT32_C(1) <<  7, /* Titlecase Letter */
	UC_LU = UINT32_C(1) <<  8, /* Uppercase Letter */
	UC_MC = UINT32_C(1) <<  9, /* Spacing Mark */
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

	UC_C  = UC_CC | UC_CF | UC_CN | UC_CO | UC_CS, /* Other */
	UC_L  = UC_LL | UC_LM | UC_LO | UC_LT | UC_LU, /* Letter */
	UC_LC = UC_LU | UC_LL | UC_LT,                 /* Cased Letter */
	UC_M  = UC_MC | UC_ME | UC_MN,                 /* Mark */
	UC_N  = UC_ND | UC_NL | UC_NO,                 /* Number */
	UC_P  = UC_PC | UC_PD | UC_PE | UC_PF | UC_PI  /* Punctuation */
	      | UC_PO | UC_PS,
	UC_S  = UC_SC | UC_SK | UC_SM | UC_SO,         /* Symbol */
	UC_Z  = UC_ZL | UC_ZP | UC_ZS,                 /* Separator */
} unicat;

/* 128 bits are more than used, but powers of 2 produce nicer assembly in GCC
   and Clang.  Prefer __int128 on GCC because current stable releases don’t yet
   properly support _BitInt(). */
#ifdef __GNUC__
__extension__ typedef unsigned __int128 uniprop_underlying;
#else
typedef _BitInt(128) uniprop_underlying;
#endif

typedef enum [[clang::flag_enum]] : uniprop_underlying {
	UP_NAME                         = (uniprop_underlying)1 <<  0,
	UP_NAME_ALIAS                   = (uniprop_underlying)1 <<  1,
	UP_BLOCK                        = (uniprop_underlying)1 <<  2,
	UP_AGE                          = (uniprop_underlying)1 <<  3,
	UP_GENERAL_CATEGORY             = (uniprop_underlying)1 <<  4,
	UP_SCRIPT                       = (uniprop_underlying)1 <<  5,
	UP_SCRIPT_EXTENSIONS            = (uniprop_underlying)1 <<  6,
	UP_WHITE_SPACE                  = (uniprop_underlying)1 <<  7,
	UP_ALPHABETIC                   = (uniprop_underlying)1 <<  8,
	UP_HANGUL_SYLLABLE_TYPE         = (uniprop_underlying)1 <<  9,
	UP_NONCHARACTER_CODE_POINT      = (uniprop_underlying)1 << 10,
	UP_DEFAULT_IGNORABLE_CODE_POINT = (uniprop_underlying)1 << 11,
	UP_DEPRECATED                   = (uniprop_underlying)1 << 12,
	UP_LOGICAL_ORDER_EXCEPTION      = (uniprop_underlying)1 << 13,
	UP_VARIATION_SELECTOR           = (uniprop_underlying)1 << 14,
	UP_UPPERCASE                    = (uniprop_underlying)1 << 15,
	UP_LOWERCASE                    = (uniprop_underlying)1 << 16,
	UP_LOWERCASE_MAPPING            = (uniprop_underlying)1 << 17,
	UP_TITLECASE_MAPPING            = (uniprop_underlying)1 << 18,
	UP_UPPERCASE_MAPPING            = (uniprop_underlying)1 << 19,
	UP_CASE_FOLDING                 = (uniprop_underlying)1 << 20,
	UP_SIMPLE_LOWERCASE_MAPPING     = (uniprop_underlying)1 << 21,
	UP_SIMPLE_TITLECASE_MAPPING     = (uniprop_underlying)1 << 22,
	UP_SIMPLE_UPPERCASE_MAPPING     = (uniprop_underlying)1 << 23,
	UP_SIMPLE_CASE_FOLDING          = (uniprop_underlying)1 << 24,
	UP_SOFT_DOTTED                  = (uniprop_underlying)1 << 25,
	UP_CASED                        = (uniprop_underlying)1 << 26,
	UP_CASE_IGNORABLE               = (uniprop_underlying)1 << 27,
	UP_CHANGES_WHEN_LOWERCASED      = (uniprop_underlying)1 << 28,
	UP_CHANGES_WHEN_UPPERCASED      = (uniprop_underlying)1 << 29,
	UP_CHANGES_WHEN_TITLECASED      = (uniprop_underlying)1 << 30,
	UP_CHANGES_WHEN_CASEFOLDED      = (uniprop_underlying)1 << 31,
	UP_CHANGES_WHEN_CASEMAPPED      = (uniprop_underlying)1 << 32,
	UP_EMOJI                        = (uniprop_underlying)1 << 33,
	UP_EMOJI_PRESENTATION           = (uniprop_underlying)1 << 34,
	UP_EMOJI_MODIFIER               = (uniprop_underlying)1 << 35,
	UP_EMOJI_MODIFIER_BASE          = (uniprop_underlying)1 << 36,
	UP_EMOJI_COMPONENT              = (uniprop_underlying)1 << 37,
	UP_EXTENDED_PICTOGRAPHIC        = (uniprop_underlying)1 << 38,
	UP_NUMERIC_VALUE                = (uniprop_underlying)1 << 39,
	UP_NUMERIC_TYPE                 = (uniprop_underlying)1 << 40,
	UP_HEX_DIGIT                    = (uniprop_underlying)1 << 41,
	UP_ASCII_HEX_DIGIT              = (uniprop_underlying)1 << 42,
	UP_CANONICAL_COMBINING_CLASS    = (uniprop_underlying)1 << 43,
	UP_DECOMPOSITION_TYPE           = (uniprop_underlying)1 << 44,
	UP_NFC_QUICK_CHECK              = (uniprop_underlying)1 << 45,
	UP_NFKC_QUICK_CHECK             = (uniprop_underlying)1 << 46,
	UP_NFD_QUICK_CHECK              = (uniprop_underlying)1 << 47,
	UP_NFKD_QUICK_CHECK             = (uniprop_underlying)1 << 48,
	UP_NFKC_CASEFOLD                = (uniprop_underlying)1 << 49,
	UP_CHANGES_WHEN_NFKC_CASEFOLDED = (uniprop_underlying)1 << 50,
	UP_NFKC_SIMPLE_CASEFOLD         = (uniprop_underlying)1 << 51,
	UP_JOIN_CONTROL                 = (uniprop_underlying)1 << 52,
	UP_JOINING_GROUP                = (uniprop_underlying)1 << 53,
	UP_JOINING_TYPE                 = (uniprop_underlying)1 << 54,
	UP_VERTICAL_ORIENTATION         = (uniprop_underlying)1 << 55,
	UP_EAST_ASIAN_WIDTH             = (uniprop_underlying)1 << 56,
	UP_PREPENDED_CONCATENATION_MARK = (uniprop_underlying)1 << 57,
	UP_BIDI_CLASS                   = (uniprop_underlying)1 << 58,
	UP_BIDI_CONTROL                 = (uniprop_underlying)1 << 59,
	UP_BIDI_MIRRORED                = (uniprop_underlying)1 << 60,
	UP_BIDI_MIRRORING_GLYPH         = (uniprop_underlying)1 << 61,
	UP_BIDI_PAIRED_BRACKET          = (uniprop_underlying)1 << 62,
	UP_BIDI_PAIRED_BRACKET_TYPE     = (uniprop_underlying)1 << 63,
	UP_ID_CONTINUE                  = (uniprop_underlying)1 << 64,
	UP_ID_START                     = (uniprop_underlying)1 << 65,
	UP_XID_CONTINUE                 = (uniprop_underlying)1 << 66,
	UP_XID_START                    = (uniprop_underlying)1 << 67,
	UP_ID_COMPAT_MATH_CONTINUE      = (uniprop_underlying)1 << 68,
	UP_ID_COMPAT_MATH_START         = (uniprop_underlying)1 << 69,
	UP_PATTERN_SYNTAX               = (uniprop_underlying)1 << 70,
	UP_PATTERN_WHITE_SPACE          = (uniprop_underlying)1 << 71,
	UP_LINE_BREAK                   = (uniprop_underlying)1 << 72,
	UP_GRAPHEME_CLUSTER_BREAK       = (uniprop_underlying)1 << 73,
	UP_SENTENCE_BREAK               = (uniprop_underlying)1 << 74,
	UP_WORD_BREAK                   = (uniprop_underlying)1 << 75,
	UP_IDEOGRAPHIC                  = (uniprop_underlying)1 << 76,
	UP_UNIFIED_IDEOGRAPH            = (uniprop_underlying)1 << 77,
	UP_RADICAL                      = (uniprop_underlying)1 << 78,
	UP_IDS_UNARY_OPERATOR           = (uniprop_underlying)1 << 79,
	UP_IDS_BINARY_OPERATOR          = (uniprop_underlying)1 << 80,
	UP_IDS_TRINARY_OPERATOR         = (uniprop_underlying)1 << 81,
	UP_UNICODE_RADICAL_STROKE       = (uniprop_underlying)1 << 82,
	UP_EQUIVALENT_UNIFIED_IDEOGRAPH = (uniprop_underlying)1 << 83,
	UP_MATH                         = (uniprop_underlying)1 << 84,
	UP_QUOTATION_MARK               = (uniprop_underlying)1 << 85,
	UP_DASH                         = (uniprop_underlying)1 << 86,
	UP_SENTENCE_TERMINAL            = (uniprop_underlying)1 << 87,
	UP_TERMINAL_PUNCTUATION         = (uniprop_underlying)1 << 88,
	UP_DIACRITIC                    = (uniprop_underlying)1 << 89,
	UP_EXTENDER                     = (uniprop_underlying)1 << 90,
	UP_GRAPHEME_BASE                = (uniprop_underlying)1 << 91,
	UP_GRAPHEME_EXTEND              = (uniprop_underlying)1 << 92,
	UP_UNICODE_1_NAME               = (uniprop_underlying)1 << 93,
	UP_REGIONAL_INDICATOR           = (uniprop_underlying)1 << 94,
	UP_INDIC_CONJUNCT_BREAK         = (uniprop_underlying)1 << 95,
	UP_INDIC_POSITIONAL_CATEGORY    = (uniprop_underlying)1 << 96,
	UP_INDIC_SYLLABIC_CATEGORY      = (uniprop_underlying)1 << 97,
} uniprop;
/* clang-format on */

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
