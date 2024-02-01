#include "rtype.h"
#include "rune.h"

bool
rprop_noncharacter_code_point(rune ch)
{
	return (ch >= 0xFDD0 && ch <= 0xFDEF)
	    || ((ch & 0xFFFE) == 0xFFFE
	        && (ch & RUNE_C(0xFF0000)) <= RUNE_C(0x0F0000));
}
