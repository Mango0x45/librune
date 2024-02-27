#include "rtype.h"
#include "rune.h"
#include "unicode.h"

/* Note to self: Always keep this on the next version */
static_assert(
	!UNICODE_PREREQ(15, 1, 1),
	"Sanity check: ensure rprop_is_ri() conforms to Unicode > 15.1.0");

bool
rprop_is_ri(rune ch)
{
	return ch >= RUNE_C(0x1F1E6) && ch <= RUNE_C(0x1F1FF);
}
