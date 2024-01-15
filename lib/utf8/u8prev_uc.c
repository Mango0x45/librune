#include "utf8.h"

#include "internal/common.h"

const char8_t *
u8prev_uc(rune *ch, const char8_t *s, const char8_t *start)
{
	if (s - start <= 0) {
		return nullptr;
	} else if (U1(s[-1])) {
		*ch = s[-1];
		return s - 1;
	} else if (UC(s[-1]) && U2(s[-2])) {
		*ch = ((s[-2] & 0x1F) << 6) | (s[-1] & 0x3F);
		return s - 2;
	} else if (UC(s[-1]) && UC(s[-2]) && U2(s[-3])) {
		*ch = ((s[-3] & 0x0F) << 12) | ((s[-2] & 0x3F) << 6) | (s[-1] & 0x3F);
		return s - 3;
	} else if (UC(s[-1]) && UC(s[-2]) && UC(s[-3]) && U2(s[-4])) {
		*ch = ((s[-4] & 0x07) << 18) | ((s[-3] & 0x3F) << 12)
		    | ((s[-2] & 0x3F) << 6) | (s[-1] & 0x3F);
		return s - 4;
	}

	unreachable();
}
