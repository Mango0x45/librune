#ifndef RUNE_RTYPE_H
#define RUNE_RTYPE_H

#include <stdint.h>

#include "internal/types.h"

/* clang-format off */
enum [[clang::flag_enum]] unicat : uint_fast32_t {
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
};
/* clang-format on */

[[unsequenced]] bool runeis(rune, enum unicat);
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

/* Non-autogenerated props */
[[unsequenced]] bool rprop_ascii_hex_digit(rune);
[[unsequenced]] bool rprop_ids_trinary_operator(rune);
[[unsequenced]] bool rprop_ids_unary_operator(rune);
[[unsequenced]] bool rprop_join_control(rune);
[[unsequenced]] bool rprop_noncharacter_code_point(rune);
[[unsequenced]] bool rprop_pattern_white_space(rune);

/* PROP PREDICATES START */
[[unsequenced]] bool rprop_alphabetic(rune);
[[unsequenced]] bool rprop_bidi_control(rune);
[[unsequenced]] bool rprop_case_ignorable(rune);
[[unsequenced]] bool rprop_cased(rune);
[[unsequenced]] bool rprop_changes_when_casefolded(rune);
[[unsequenced]] bool rprop_changes_when_casemapped(rune);
[[unsequenced]] bool rprop_changes_when_lowercased(rune);
[[unsequenced]] bool rprop_changes_when_nfkc_casefolded(rune);
[[unsequenced]] bool rprop_changes_when_titlecased(rune);
[[unsequenced]] bool rprop_changes_when_uppercased(rune);
[[unsequenced]] bool rprop_dash(rune);
[[unsequenced]] bool rprop_default_ignorable_code_point(rune);
[[unsequenced]] bool rprop_deprecated(rune);
[[unsequenced]] bool rprop_diacritic(rune);
[[unsequenced]] bool rprop_emoji(rune);
[[unsequenced]] bool rprop_emoji_component(rune);
[[unsequenced]] bool rprop_emoji_modifier(rune);
[[unsequenced]] bool rprop_emoji_modifier_base(rune);
[[unsequenced]] bool rprop_emoji_presentation(rune);
[[unsequenced]] bool rprop_extended_pictographic(rune);
[[unsequenced]] bool rprop_extender(rune);
[[unsequenced]] bool rprop_grapheme_base(rune);
[[unsequenced]] bool rprop_grapheme_extend(rune);
[[unsequenced]] bool rprop_hex_digit(rune);
[[unsequenced]] bool rprop_id_compat_math_continue(rune);
[[unsequenced]] bool rprop_id_compat_math_start(rune);
[[unsequenced]] bool rprop_id_continue(rune);
[[unsequenced]] bool rprop_id_start(rune);
[[unsequenced]] bool rprop_ideographic(rune);
[[unsequenced]] bool rprop_ids_binary_operator(rune);
[[unsequenced]] bool rprop_indic_conjunct_break(rune);
[[unsequenced]] bool rprop_logical_order_exception(rune);
[[unsequenced]] bool rprop_lowercase(rune);
[[unsequenced]] bool rprop_math(rune);
[[unsequenced]] bool rprop_pattern_syntax(rune);
[[unsequenced]] bool rprop_prepended_concatenation_mark(rune);
[[unsequenced]] bool rprop_quotation_mark(rune);
[[unsequenced]] bool rprop_radical(rune);
[[unsequenced]] bool rprop_regional_indicator(rune);
[[unsequenced]] bool rprop_sentence_terminal(rune);
[[unsequenced]] bool rprop_soft_dotted(rune);
[[unsequenced]] bool rprop_terminal_punctuation(rune);
[[unsequenced]] bool rprop_unified_ideograph(rune);
[[unsequenced]] bool rprop_uppercase(rune);
[[unsequenced]] bool rprop_variation_selector(rune);
[[unsequenced]] bool rprop_white_space(rune);
[[unsequenced]] bool rprop_xid_continue(rune);
[[unsequenced]] bool rprop_xid_start(rune);
/* PROP PREDICATES END */

#endif
