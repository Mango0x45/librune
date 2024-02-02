#ifndef RUNE_RTYPE_H
#define RUNE_RTYPE_H

#include <stdint.h>

#include "internal/types.h"

/* clang-format off */
enum [[clang::flag_enum]] general_category_bf : uint_fast32_t {
	GC_CN = 0,                 /* Not Assigned */
	GC_CC = UINT32_C(1) <<  0, /* Control */
	GC_CF = UINT32_C(1) <<  1, /* Format */
	GC_CO = UINT32_C(1) <<  2, /* Private Use */
	GC_CS = UINT32_C(1) <<  3, /* Surrogate */
	GC_LL = UINT32_C(1) <<  4, /* Lowercase Letter */
	GC_LM = UINT32_C(1) <<  5, /* Modifier Letter */
	GC_LO = UINT32_C(1) <<  6, /* Other Letter */
	GC_LT = UINT32_C(1) <<  7, /* Titlecase Letter */
	GC_LU = UINT32_C(1) <<  8, /* Uppercase Letter */
	GC_MC = UINT32_C(1) <<  9, /* Spacing Mark */
	GC_ME = UINT32_C(1) << 10, /* Enclosing Mark */
	GC_MN = UINT32_C(1) << 11, /* Nonspacing Mark */
	GC_ND = UINT32_C(1) << 12, /* Decimal Number */
	GC_NL = UINT32_C(1) << 13, /* Letter Number */
	GC_NO = UINT32_C(1) << 14, /* Other Number */
	GC_PC = UINT32_C(1) << 15, /* Connector Punctuation */
	GC_PD = UINT32_C(1) << 16, /* Dash Punctuation */
	GC_PE = UINT32_C(1) << 17, /* Close Punctuation */
	GC_PF = UINT32_C(1) << 18, /* Final Punctuation */
	GC_PI = UINT32_C(1) << 19, /* Initial Punctuation */
	GC_PO = UINT32_C(1) << 20, /* Other Punctuation */
	GC_PS = UINT32_C(1) << 21, /* Open Punctuation */
	GC_SC = UINT32_C(1) << 22, /* Currency Symbol */
	GC_SK = UINT32_C(1) << 23, /* Modifier Symbol */
	GC_SM = UINT32_C(1) << 24, /* Math Symbol */
	GC_SO = UINT32_C(1) << 25, /* Other Symbol */
	GC_ZL = UINT32_C(1) << 26, /* Line Separator */
	GC_ZP = UINT32_C(1) << 27, /* Paragraph Separator */
	GC_ZS = UINT32_C(1) << 28, /* Space Separator */

	GC_C  = GC_CC | GC_CF | GC_CN | GC_CO | GC_CS, /* Other */
	GC_L  = GC_LL | GC_LM | GC_LO | GC_LT | GC_LU, /* Letter */
	GC_LC = GC_LU | GC_LL | GC_LT,                 /* Cased Letter */
	GC_M  = GC_MC | GC_ME | GC_MN,                 /* Mark */
	GC_N  = GC_ND | GC_NL | GC_NO,                 /* Number */
	GC_P  = GC_PC | GC_PD | GC_PE | GC_PF | GC_PI  /* Punctuation */
	      | GC_PO | GC_PS,
	GC_S  = GC_SC | GC_SK | GC_SM | GC_SO,         /* Symbol */
	GC_Z  = GC_ZL | GC_ZP | GC_ZS,                 /* Separator */
};

enum [[clang::flag_enum]] joining_type_bf {
	JT_U = 0,      /* Non Joining */
	JT_C = 1 << 0, /* Join Causing */
	JT_D = 1 << 1, /* Dual Joining */
	JT_R = 1 << 3, /* Right Joining */
	JT_L = 1 << 2, /* Left Joining */
	JT_T = 1 << 4, /* Transparent */
};

enum [[clang::flag_enum]] numeric_type_bf {
	NT_NONE    = 0,
	NT_DECIMAL = 1 << 0,
	NT_DIGIT   = 1 << 1,
	NT_NUMERIC = 1 << 2,
};

};
/* clang-format on */

/* GCC at the time of writing doesn’t properly support _BitInt */
#ifdef __SIZEOF_INT128__
typedef unsigned __int128 joining_group_bf;
#elif BITINT_MAXWIDTH >= 128
typedef unsigned _BitInt(128) joining_group_bf;
#else
#	error "_BitInt types of width >=128 not supported"
#endif

#define JG_NONE                     ((joining_group_bf)0)
#define JG_AFRICAN_FEH              ((joining_group_bf)1 << 0)
#define JG_AFRICAN_NOON             ((joining_group_bf)1 << 1)
#define JG_AFRICAN_QAF              ((joining_group_bf)1 << 2)
#define JG_AIN                      ((joining_group_bf)1 << 3)
#define JG_ALAPH                    ((joining_group_bf)1 << 4)
#define JG_ALEF                     ((joining_group_bf)1 << 5)
#define JG_BEH                      ((joining_group_bf)1 << 6)
#define JG_BETH                     ((joining_group_bf)1 << 7)
#define JG_BURUSHASKI_YEH_BARREE    ((joining_group_bf)1 << 8)
#define JG_DAL                      ((joining_group_bf)1 << 9)
#define JG_DALATH_RISH              ((joining_group_bf)1 << 10)
#define JG_E                        ((joining_group_bf)1 << 11)
#define JG_FARSI_YEH                ((joining_group_bf)1 << 12)
#define JG_FE                       ((joining_group_bf)1 << 13)
#define JG_FEH                      ((joining_group_bf)1 << 14)
#define JG_FINAL_SEMKATH            ((joining_group_bf)1 << 15)
#define JG_GAF                      ((joining_group_bf)1 << 16)
#define JG_GAMAL                    ((joining_group_bf)1 << 17)
#define JG_HAH                      ((joining_group_bf)1 << 18)
#define JG_HANIFI_ROHINGYA_KINNA_YA ((joining_group_bf)1 << 19)
#define JG_HANIFI_ROHINGYA_PA       ((joining_group_bf)1 << 20)
#define JG_HE                       ((joining_group_bf)1 << 21)
#define JG_HEH                      ((joining_group_bf)1 << 22)
#define JG_HEH_GOAL                 ((joining_group_bf)1 << 23)
#define JG_HETH                     ((joining_group_bf)1 << 24)
#define JG_KAF                      ((joining_group_bf)1 << 25)
#define JG_KAPH                     ((joining_group_bf)1 << 26)
#define JG_KHAPH                    ((joining_group_bf)1 << 27)
#define JG_KNOTTED_HEH              ((joining_group_bf)1 << 28)
#define JG_LAM                      ((joining_group_bf)1 << 29)
#define JG_LAMADH                   ((joining_group_bf)1 << 30)
#define JG_MALAYALAM_BHA            ((joining_group_bf)1 << 31)
#define JG_MALAYALAM_JA             ((joining_group_bf)1 << 32)
#define JG_MALAYALAM_LLA            ((joining_group_bf)1 << 33)
#define JG_MALAYALAM_LLLA           ((joining_group_bf)1 << 34)
#define JG_MALAYALAM_NGA            ((joining_group_bf)1 << 35)
#define JG_MALAYALAM_NNA            ((joining_group_bf)1 << 36)
#define JG_MALAYALAM_NNNA           ((joining_group_bf)1 << 37)
#define JG_MALAYALAM_NYA            ((joining_group_bf)1 << 38)
#define JG_MALAYALAM_RA             ((joining_group_bf)1 << 39)
#define JG_MALAYALAM_SSA            ((joining_group_bf)1 << 40)
#define JG_MALAYALAM_TTA            ((joining_group_bf)1 << 41)
#define JG_MANICHAEAN_ALEPH         ((joining_group_bf)1 << 42)
#define JG_MANICHAEAN_AYIN          ((joining_group_bf)1 << 43)
#define JG_MANICHAEAN_BETH          ((joining_group_bf)1 << 44)
#define JG_MANICHAEAN_DALETH        ((joining_group_bf)1 << 45)
#define JG_MANICHAEAN_DHAMEDH       ((joining_group_bf)1 << 46)
#define JG_MANICHAEAN_FIVE          ((joining_group_bf)1 << 47)
#define JG_MANICHAEAN_GIMEL         ((joining_group_bf)1 << 48)
#define JG_MANICHAEAN_HETH          ((joining_group_bf)1 << 49)
#define JG_MANICHAEAN_HUNDRED       ((joining_group_bf)1 << 50)
#define JG_MANICHAEAN_KAPH          ((joining_group_bf)1 << 51)
#define JG_MANICHAEAN_LAMEDH        ((joining_group_bf)1 << 52)
#define JG_MANICHAEAN_MEM           ((joining_group_bf)1 << 53)
#define JG_MANICHAEAN_NUN           ((joining_group_bf)1 << 54)
#define JG_MANICHAEAN_ONE           ((joining_group_bf)1 << 55)
#define JG_MANICHAEAN_PE            ((joining_group_bf)1 << 56)
#define JG_MANICHAEAN_QOPH          ((joining_group_bf)1 << 57)
#define JG_MANICHAEAN_RESH          ((joining_group_bf)1 << 58)
#define JG_MANICHAEAN_SADHE         ((joining_group_bf)1 << 59)
#define JG_MANICHAEAN_SAMEKH        ((joining_group_bf)1 << 60)
#define JG_MANICHAEAN_TAW           ((joining_group_bf)1 << 61)
#define JG_MANICHAEAN_TEN           ((joining_group_bf)1 << 62)
#define JG_MANICHAEAN_TETH          ((joining_group_bf)1 << 63)
#define JG_MANICHAEAN_THAMEDH       ((joining_group_bf)1 << 64)
#define JG_MANICHAEAN_TWENTY        ((joining_group_bf)1 << 65)
#define JG_MANICHAEAN_WAW           ((joining_group_bf)1 << 66)
#define JG_MANICHAEAN_YODH          ((joining_group_bf)1 << 67)
#define JG_MANICHAEAN_ZAYIN         ((joining_group_bf)1 << 68)
#define JG_MEEM                     ((joining_group_bf)1 << 69)
#define JG_MIM                      ((joining_group_bf)1 << 70)
#define JG_NOON                     ((joining_group_bf)1 << 71)
#define JG_NUN                      ((joining_group_bf)1 << 72)
#define JG_NYA                      ((joining_group_bf)1 << 73)
#define JG_PE                       ((joining_group_bf)1 << 74)
#define JG_QAF                      ((joining_group_bf)1 << 75)
#define JG_QAPH                     ((joining_group_bf)1 << 76)
#define JG_REH                      ((joining_group_bf)1 << 77)
#define JG_REVERSED_PE              ((joining_group_bf)1 << 78)
#define JG_ROHINGYA_YEH             ((joining_group_bf)1 << 79)
#define JG_SAD                      ((joining_group_bf)1 << 80)
#define JG_SADHE                    ((joining_group_bf)1 << 81)
#define JG_SEEN                     ((joining_group_bf)1 << 82)
#define JG_SEMKATH                  ((joining_group_bf)1 << 83)
#define JG_SHIN                     ((joining_group_bf)1 << 84)
#define JG_STRAIGHT_WAW             ((joining_group_bf)1 << 85)
#define JG_SWASH_KAF                ((joining_group_bf)1 << 86)
#define JG_SYRIAC_WAW               ((joining_group_bf)1 << 87)
#define JG_TAH                      ((joining_group_bf)1 << 88)
#define JG_TAW                      ((joining_group_bf)1 << 89)
#define JG_TEH_MARBUTA              ((joining_group_bf)1 << 90)
#define JG_TEH_MARBUTA_GOAL         ((joining_group_bf)1 << 91)
#define JG_TETH                     ((joining_group_bf)1 << 92)
#define JG_THIN_YEH                 ((joining_group_bf)1 << 93)
#define JG_VERTICAL_TAIL            ((joining_group_bf)1 << 94)
#define JG_WAW                      ((joining_group_bf)1 << 95)
#define JG_YEH                      ((joining_group_bf)1 << 96)
#define JG_YEH_BARREE               ((joining_group_bf)1 << 97)
#define JG_YEH_WITH_TAIL            ((joining_group_bf)1 << 98)
#define JG_YUDH                     ((joining_group_bf)1 << 99)
#define JG_YUDH_HE                  ((joining_group_bf)1 << 100)
#define JG_ZAIN                     ((joining_group_bf)1 << 101)
#define JG_ZHAIN                    ((joining_group_bf)1 << 102)

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

[[unsequenced]] enum general_category_bf rprop_get_general_category(rune);
[[unsequenced]] enum joining_type_bf rprop_get_joining_type(rune);
[[unsequenced]] enum numeric_type_bf rprop_get_numeric_type(rune);
[[unsequenced]] joining_group_bf rprop_get_joining_group(rune);

/* Non-autogenerated rprop_is_*() functions */
[[unsequenced]] bool rprop_is_ascii_hex_digit(rune);
[[unsequenced]] bool rprop_is_ids_trinary_operator(rune);
[[unsequenced]] bool rprop_is_ids_unary_operator(rune);
[[unsequenced]] bool rprop_is_join_control(rune);
[[unsequenced]] bool rprop_is_noncharacter_code_point(rune);
[[unsequenced]] bool rprop_is_pattern_white_space(rune);

/* PROP PREDICATES START */
[[unsequenced]] bool rprop_is_alphabetic(rune);
[[unsequenced]] bool rprop_is_bidi_control(rune);
[[unsequenced]] bool rprop_is_bidi_mirrored(rune);
[[unsequenced]] bool rprop_is_case_ignorable(rune);
[[unsequenced]] bool rprop_is_cased(rune);
[[unsequenced]] bool rprop_is_changes_when_casefolded(rune);
[[unsequenced]] bool rprop_is_changes_when_casemapped(rune);
[[unsequenced]] bool rprop_is_changes_when_lowercased(rune);
[[unsequenced]] bool rprop_is_changes_when_nfkc_casefolded(rune);
[[unsequenced]] bool rprop_is_changes_when_titlecased(rune);
[[unsequenced]] bool rprop_is_changes_when_uppercased(rune);
[[unsequenced]] bool rprop_is_dash(rune);
[[unsequenced]] bool rprop_is_default_ignorable_code_point(rune);
[[unsequenced]] bool rprop_is_deprecated(rune);
[[unsequenced]] bool rprop_is_diacritic(rune);
[[unsequenced]] bool rprop_is_emoji(rune);
[[unsequenced]] bool rprop_is_emoji_component(rune);
[[unsequenced]] bool rprop_is_emoji_modifier(rune);
[[unsequenced]] bool rprop_is_emoji_modifier_base(rune);
[[unsequenced]] bool rprop_is_emoji_presentation(rune);
[[unsequenced]] bool rprop_is_extended_pictographic(rune);
[[unsequenced]] bool rprop_is_extender(rune);
[[unsequenced]] bool rprop_is_grapheme_base(rune);
[[unsequenced]] bool rprop_is_grapheme_extend(rune);
[[unsequenced]] bool rprop_is_hex_digit(rune);
[[unsequenced]] bool rprop_is_id_compat_math_continue(rune);
[[unsequenced]] bool rprop_is_id_compat_math_start(rune);
[[unsequenced]] bool rprop_is_id_continue(rune);
[[unsequenced]] bool rprop_is_id_start(rune);
[[unsequenced]] bool rprop_is_ideographic(rune);
[[unsequenced]] bool rprop_is_ids_binary_operator(rune);
[[unsequenced]] bool rprop_is_indic_conjunct_break(rune);
[[unsequenced]] bool rprop_is_logical_order_exception(rune);
[[unsequenced]] bool rprop_is_lowercase(rune);
[[unsequenced]] bool rprop_is_math(rune);
[[unsequenced]] bool rprop_is_pattern_syntax(rune);
[[unsequenced]] bool rprop_is_prepended_concatenation_mark(rune);
[[unsequenced]] bool rprop_is_quotation_mark(rune);
[[unsequenced]] bool rprop_is_radical(rune);
[[unsequenced]] bool rprop_is_regional_indicator(rune);
[[unsequenced]] bool rprop_is_sentence_terminal(rune);
[[unsequenced]] bool rprop_is_soft_dotted(rune);
[[unsequenced]] bool rprop_is_terminal_punctuation(rune);
[[unsequenced]] bool rprop_is_unified_ideograph(rune);
[[unsequenced]] bool rprop_is_uppercase(rune);
[[unsequenced]] bool rprop_is_variation_selector(rune);
[[unsequenced]] bool rprop_is_white_space(rune);
[[unsequenced]] bool rprop_is_xid_continue(rune);
[[unsequenced]] bool rprop_is_xid_start(rune);
/* PROP PREDICATES END */

#endif
