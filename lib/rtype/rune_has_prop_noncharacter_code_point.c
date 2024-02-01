#include "rtype.h"

bool
rune_has_prop_noncharacter_code_point(rune ch)
{
	return (ch >= 0xFDD0 && ch <= 0xFDEF) || ((ch & 0xFFFE) == 0xFFFE && (ch & RUNE_C(0xFF0000)) <= RUNE_C(0x0F0000));
}
