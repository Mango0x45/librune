#ifndef RUNE_RTYPE_H
#define RUNE_RTYPE_H

#include <stdint.h>

#include "internal/types.h"

typedef uint_fast32_t general_category_bf;
#define GC_CN ((general_category_bf)1 << 0)  /* Not Assigned */
#define GC_CC ((general_category_bf)1 << 1)  /* Control */
#define GC_CF ((general_category_bf)1 << 2)  /* Format */
#define GC_CO ((general_category_bf)1 << 3)  /* Private Use */
#define GC_CS ((general_category_bf)1 << 4)  /* Surrogate */
#define GC_LL ((general_category_bf)1 << 5)  /* Lowercase Letter */
#define GC_LM ((general_category_bf)1 << 6)  /* Modifier Letter */
#define GC_LO ((general_category_bf)1 << 7)  /* Other Letter */
#define GC_LT ((general_category_bf)1 << 8)  /* Titlecase Letter */
#define GC_LU ((general_category_bf)1 << 9)  /* Uppercase Letter */
#define GC_MC ((general_category_bf)1 << 10) /* Spacing Mark */
#define GC_ME ((general_category_bf)1 << 11) /* Enclosing Mark */
#define GC_MN ((general_category_bf)1 << 12) /* Nonspacing Mark */
#define GC_ND ((general_category_bf)1 << 13) /* Decimal Number */
#define GC_NL ((general_category_bf)1 << 14) /* Letter Number */
#define GC_NO ((general_category_bf)1 << 15) /* Other Number */
#define GC_PC ((general_category_bf)1 << 16) /* Connector Punctuation */
#define GC_PD ((general_category_bf)1 << 17) /* Dash Punctuation */
#define GC_PE ((general_category_bf)1 << 18) /* Close Punctuation */
#define GC_PF ((general_category_bf)1 << 19) /* Final Punctuation */
#define GC_PI ((general_category_bf)1 << 20) /* Initial Punctuation */
#define GC_PO ((general_category_bf)1 << 21) /* Other Punctuation */
#define GC_PS ((general_category_bf)1 << 22) /* Open Punctuation */
#define GC_SC ((general_category_bf)1 << 23) /* Currency Symbol */
#define GC_SK ((general_category_bf)1 << 24) /* Modifier Symbol */
#define GC_SM ((general_category_bf)1 << 25) /* Math Symbol */
#define GC_SO ((general_category_bf)1 << 26) /* Other Symbol */
#define GC_ZL ((general_category_bf)1 << 27) /* Line Separator */
#define GC_ZP ((general_category_bf)1 << 28) /* Paragraph Separator */
#define GC_ZS ((general_category_bf)1 << 29) /* Space Separator */
#define GC_C  (GC_CC | GC_CF | GC_CN | GC_CO | GC_CS) /* Other */
#define GC_LC (GC_LU | GC_LL | GC_LT)                 /* Cased Letter */
#define GC_L  (GC_LL | GC_LM | GC_LO | GC_LT | GC_LU) /* Letter */
#define GC_M  (GC_MC | GC_ME | GC_MN)                 /* Mark */
#define GC_N  (GC_ND | GC_NL | GC_NO)                 /* Number */
#define GC_S  (GC_SC | GC_SK | GC_SM | GC_SO)         /* Symbol */
#define GC_Z  (GC_ZL | GC_ZP | GC_ZS)                 /* Separator */
#define GC_P \
	(GC_PC | GC_PD | GC_PE | GC_PF | GC_PI | GC_PO | GC_PS) /* Punctuation */

typedef unsigned int joining_type_bf;
#define JT_U ((joining_type_bf)1 << 0) /* Non Joining */
#define JT_C ((joining_type_bf)1 << 1) /* Join Causing */
#define JT_D ((joining_type_bf)1 << 2) /* Dual Joining */
#define JT_R ((joining_type_bf)1 << 4) /* Right Joining */
#define JT_L ((joining_type_bf)1 << 3) /* Left Joining */
#define JT_T ((joining_type_bf)1 << 5) /* Transparent */

typedef unsigned int numeric_type_bf;
#define NT_NONE    ((numeric_type_bf)1 << 0)
#define NT_DECIMAL ((numeric_type_bf)1 << 1)
#define NT_DIGIT   ((numeric_type_bf)1 << 2)
#define NT_NUMERIC ((numeric_type_bf)1 << 3)

typedef uint_fast32_t decomposition_type_bf;
#define DT_NONE      ((decomposition_type_bf)1 << 0)
#define DT_CANONICAL ((decomposition_type_bf)1 << 1)
#define DT_CIRCLE    ((decomposition_type_bf)1 << 2)
#define DT_COMPAT    ((decomposition_type_bf)1 << 3)
#define DT_FINAL     ((decomposition_type_bf)1 << 4)
#define DT_FONT      ((decomposition_type_bf)1 << 5)
#define DT_FRACTION  ((decomposition_type_bf)1 << 6)
#define DT_INITIAL   ((decomposition_type_bf)1 << 7)
#define DT_ISOLATED  ((decomposition_type_bf)1 << 8)
#define DT_MEDIAL    ((decomposition_type_bf)1 << 9)
#define DT_NARROW    ((decomposition_type_bf)1 << 10)
#define DT_NOBREAK   ((decomposition_type_bf)1 << 11)
#define DT_SMALL     ((decomposition_type_bf)1 << 12)
#define DT_SQUARE    ((decomposition_type_bf)1 << 13)
#define DT_SUB       ((decomposition_type_bf)1 << 14)
#define DT_SUPER     ((decomposition_type_bf)1 << 15)
#define DT_VERTICAL  ((decomposition_type_bf)1 << 16)
#define DT_WIDE      ((decomposition_type_bf)1 << 17)

/* GCC at the time of writing doesn’t properly support _BitInt */
#ifdef __SIZEOF_INT128__
__extension__ typedef unsigned __int128 joining_group_bf;
#elif BITINT_MAXWIDTH >= 128
typedef unsigned _BitInt(128) joining_group_bf;
#else
#	error "_BitInt types of width >=128 not supported"
#endif

#define JG_NONE                     ((joining_group_bf)1 << 0)
#define JG_AFRICAN_FEH              ((joining_group_bf)1 << 1)
#define JG_AFRICAN_NOON             ((joining_group_bf)1 << 2)
#define JG_AFRICAN_QAF              ((joining_group_bf)1 << 3)
#define JG_AIN                      ((joining_group_bf)1 << 4)
#define JG_ALAPH                    ((joining_group_bf)1 << 5)
#define JG_ALEF                     ((joining_group_bf)1 << 6)
#define JG_BEH                      ((joining_group_bf)1 << 7)
#define JG_BETH                     ((joining_group_bf)1 << 8)
#define JG_BURUSHASKI_YEH_BARREE    ((joining_group_bf)1 << 9)
#define JG_DAL                      ((joining_group_bf)1 << 10)
#define JG_DALATH_RISH              ((joining_group_bf)1 << 11)
#define JG_E                        ((joining_group_bf)1 << 12)
#define JG_FARSI_YEH                ((joining_group_bf)1 << 13)
#define JG_FE                       ((joining_group_bf)1 << 14)
#define JG_FEH                      ((joining_group_bf)1 << 15)
#define JG_FINAL_SEMKATH            ((joining_group_bf)1 << 16)
#define JG_GAF                      ((joining_group_bf)1 << 17)
#define JG_GAMAL                    ((joining_group_bf)1 << 18)
#define JG_HAH                      ((joining_group_bf)1 << 19)
#define JG_HANIFI_ROHINGYA_KINNA_YA ((joining_group_bf)1 << 20)
#define JG_HANIFI_ROHINGYA_PA       ((joining_group_bf)1 << 21)
#define JG_HE                       ((joining_group_bf)1 << 22)
#define JG_HEH                      ((joining_group_bf)1 << 23)
#define JG_HEH_GOAL                 ((joining_group_bf)1 << 24)
#define JG_HETH                     ((joining_group_bf)1 << 25)
#define JG_KAF                      ((joining_group_bf)1 << 26)
#define JG_KAPH                     ((joining_group_bf)1 << 27)
#define JG_KHAPH                    ((joining_group_bf)1 << 28)
#define JG_KNOTTED_HEH              ((joining_group_bf)1 << 29)
#define JG_LAM                      ((joining_group_bf)1 << 30)
#define JG_LAMADH                   ((joining_group_bf)1 << 31)
#define JG_MALAYALAM_BHA            ((joining_group_bf)1 << 32)
#define JG_MALAYALAM_JA             ((joining_group_bf)1 << 33)
#define JG_MALAYALAM_LLA            ((joining_group_bf)1 << 34)
#define JG_MALAYALAM_LLLA           ((joining_group_bf)1 << 35)
#define JG_MALAYALAM_NGA            ((joining_group_bf)1 << 36)
#define JG_MALAYALAM_NNA            ((joining_group_bf)1 << 37)
#define JG_MALAYALAM_NNNA           ((joining_group_bf)1 << 38)
#define JG_MALAYALAM_NYA            ((joining_group_bf)1 << 39)
#define JG_MALAYALAM_RA             ((joining_group_bf)1 << 40)
#define JG_MALAYALAM_SSA            ((joining_group_bf)1 << 41)
#define JG_MALAYALAM_TTA            ((joining_group_bf)1 << 42)
#define JG_MANICHAEAN_ALEPH         ((joining_group_bf)1 << 43)
#define JG_MANICHAEAN_AYIN          ((joining_group_bf)1 << 44)
#define JG_MANICHAEAN_BETH          ((joining_group_bf)1 << 45)
#define JG_MANICHAEAN_DALETH        ((joining_group_bf)1 << 46)
#define JG_MANICHAEAN_DHAMEDH       ((joining_group_bf)1 << 47)
#define JG_MANICHAEAN_FIVE          ((joining_group_bf)1 << 48)
#define JG_MANICHAEAN_GIMEL         ((joining_group_bf)1 << 49)
#define JG_MANICHAEAN_HETH          ((joining_group_bf)1 << 50)
#define JG_MANICHAEAN_HUNDRED       ((joining_group_bf)1 << 51)
#define JG_MANICHAEAN_KAPH          ((joining_group_bf)1 << 52)
#define JG_MANICHAEAN_LAMEDH        ((joining_group_bf)1 << 53)
#define JG_MANICHAEAN_MEM           ((joining_group_bf)1 << 54)
#define JG_MANICHAEAN_NUN           ((joining_group_bf)1 << 55)
#define JG_MANICHAEAN_ONE           ((joining_group_bf)1 << 56)
#define JG_MANICHAEAN_PE            ((joining_group_bf)1 << 57)
#define JG_MANICHAEAN_QOPH          ((joining_group_bf)1 << 58)
#define JG_MANICHAEAN_RESH          ((joining_group_bf)1 << 59)
#define JG_MANICHAEAN_SADHE         ((joining_group_bf)1 << 60)
#define JG_MANICHAEAN_SAMEKH        ((joining_group_bf)1 << 61)
#define JG_MANICHAEAN_TAW           ((joining_group_bf)1 << 62)
#define JG_MANICHAEAN_TEN           ((joining_group_bf)1 << 63)
#define JG_MANICHAEAN_TETH          ((joining_group_bf)1 << 64)
#define JG_MANICHAEAN_THAMEDH       ((joining_group_bf)1 << 65)
#define JG_MANICHAEAN_TWENTY        ((joining_group_bf)1 << 66)
#define JG_MANICHAEAN_WAW           ((joining_group_bf)1 << 67)
#define JG_MANICHAEAN_YODH          ((joining_group_bf)1 << 68)
#define JG_MANICHAEAN_ZAYIN         ((joining_group_bf)1 << 69)
#define JG_MEEM                     ((joining_group_bf)1 << 70)
#define JG_MIM                      ((joining_group_bf)1 << 71)
#define JG_NOON                     ((joining_group_bf)1 << 72)
#define JG_NUN                      ((joining_group_bf)1 << 73)
#define JG_NYA                      ((joining_group_bf)1 << 74)
#define JG_PE                       ((joining_group_bf)1 << 75)
#define JG_QAF                      ((joining_group_bf)1 << 76)
#define JG_QAPH                     ((joining_group_bf)1 << 77)
#define JG_REH                      ((joining_group_bf)1 << 78)
#define JG_REVERSED_PE              ((joining_group_bf)1 << 79)
#define JG_ROHINGYA_YEH             ((joining_group_bf)1 << 80)
#define JG_SAD                      ((joining_group_bf)1 << 81)
#define JG_SADHE                    ((joining_group_bf)1 << 82)
#define JG_SEEN                     ((joining_group_bf)1 << 83)
#define JG_SEMKATH                  ((joining_group_bf)1 << 84)
#define JG_SHIN                     ((joining_group_bf)1 << 85)
#define JG_STRAIGHT_WAW             ((joining_group_bf)1 << 86)
#define JG_SWASH_KAF                ((joining_group_bf)1 << 87)
#define JG_SYRIAC_WAW               ((joining_group_bf)1 << 88)
#define JG_TAH                      ((joining_group_bf)1 << 89)
#define JG_TAW                      ((joining_group_bf)1 << 90)
#define JG_TEH_MARBUTA              ((joining_group_bf)1 << 91)
#define JG_TEH_MARBUTA_GOAL         ((joining_group_bf)1 << 92)
#define JG_TETH                     ((joining_group_bf)1 << 93)
#define JG_THIN_YEH                 ((joining_group_bf)1 << 94)
#define JG_VERTICAL_TAIL            ((joining_group_bf)1 << 95)
#define JG_WAW                      ((joining_group_bf)1 << 96)
#define JG_YEH                      ((joining_group_bf)1 << 97)
#define JG_YEH_BARREE               ((joining_group_bf)1 << 98)
#define JG_YEH_WITH_TAIL            ((joining_group_bf)1 << 99)
#define JG_YUDH                     ((joining_group_bf)1 << 100)
#define JG_YUDH_HE                  ((joining_group_bf)1 << 101)
#define JG_ZAIN                     ((joining_group_bf)1 << 102)
#define JG_ZHAIN                    ((joining_group_bf)1 << 103)

typedef unsigned int vertical_orientation_bf;
#define VO_U  ((vertical_orientation_bf)1 << 0) /* Upright */
#define VO_R  ((vertical_orientation_bf)1 << 1) /* Rotated */
#define VO_TU ((vertical_orientation_bf)1 << 2) /* Transformed ∨ Upright */
#define VO_TR ((vertical_orientation_bf)1 << 3) /* Transformed ∨ Rotated */

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

[[unsequenced]] decomposition_type_bf rprop_get_decomposition_type(rune);
[[unsequenced]] general_category_bf rprop_get_general_category(rune);
[[unsequenced]] joining_group_bf rprop_get_joining_group(rune);
[[unsequenced]] joining_type_bf rprop_get_joining_type(rune);
[[unsequenced]] numeric_type_bf rprop_get_numeric_type(rune);
[[unsequenced]] vertical_orientation_bf rprop_get_vertical_orientation(rune);

/* Non-autogenerated rprop_is_*() functions */
[[unsequenced]] bool rprop_is_ascii_hex_digit(rune);
[[unsequenced]] bool rprop_is_ids_trinary_operator(rune);
[[unsequenced]] bool rprop_is_ids_unary_operator(rune);
[[unsequenced]] bool rprop_is_join_control(rune);
[[unsequenced]] bool rprop_is_noncharacter_code_point(rune);
[[unsequenced]] bool rprop_is_pattern_white_space(rune);
[[unsequenced]] bool rprop_is_regional_indicator(rune);

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
