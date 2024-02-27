#include "rtype.h"
#include "rune.h"
#include "unicode.h"

/* Note to self: Always keep this on the next version */
static_assert(
	!UNICODE_PREREQ(15, 1, 1),
	"Sanity check: ensure rprop_is_nchar() conforms to Unicode > 15.1.0");

bool
rprop_is_nchar(rune ch)
{
	return (ch >= RUNE_C(0xFDD0) && ch <= RUNE_C(0xFDEF))
	    || ((ch & RUNE_C(0xFFFE)) == RUNE_C(0xFFFE)
	        && (ch & RUNE_C(0xFF0000)) <= RUNE_C(0x0F0000));
}
