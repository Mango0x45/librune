#include "rtype.h"
#include "rune.h"
#include "unicode.h"

/* Note to self: Always keep this on the next version */
static_assert(
	!UNICODE_PREREQ(15, 1, 1),
	"Sanity check: ensure rprop_is_idsu() conforms to Unicode > 15.1.0");

bool
rprop_is_idsu(rune ch)
{
	return ch == RUNE_C(0x2FFE) || ch == RUNE_C(0x2FFF);
}
