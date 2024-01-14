#include <stddef.h>

#include "utf8.h"

#include "internal/undefined.h"

#define U1(x) (((x)&0x80) == 0x00)
#define U2(x) (((x)&0xE0) == 0xC0)
#define U3(x) (((x)&0xF0) == 0xE0)
#define U4(x) (((x)&0xF8) == 0xF0)
#define UC(x) (((x)&0xC0) == 0x80)

int
u8tor(rune *ch, const char8_t *s)
{
	int n;

	if (U1(s[0])) {
		*ch = s[0];
		n = 1;
	} else if (U2(s[0]) && UC(s[1])) {
		*ch = ((s[0] & 0x1F) << 6) | (s[1] & 0x3F);
		n = 2;
	} else if (U3(s[0]) && UC(s[1]) && UC(s[2])) {
		*ch = ((s[0] & 0x0F) << 12) | ((s[1] & 0x3F) << 6) | (s[2] & 0x3F);
		n = 3;
	} else if (U4(s[0]) && UC(s[1]) && UC(s[2]) && UC(s[3])) {
		*ch = ((s[0] & 0x07) << 18) | ((s[1] & 0x3F) << 12)
		    | ((s[2] & 0x3F) << 6) | (s[3] & 0x3F);
		n = 4;
	} else
		goto err;

	if ((*ch >= 0xD800 && *ch <= 0xDFFF) || *ch == 0xFFFE || *ch == 0xFFFF
	    || *ch > RUNE_MAX)
	{
err:
		*ch = RUNE_ERROR;
		return 1;
	}

	return n;
}

int
u8tor_uc(rune *ch, const char8_t *s)
{
	if (U1(s[0])) {
		*ch = s[0];
		return 1;
	} else if (U2(s[0])) {
		*ch = ((s[0] & 0x1F) << 6) | (s[1] & 0x3F);
		return 2;
	} else if (U3(s[0])) {
		*ch = ((s[0] & 0x0F) << 12) | ((s[1] & 0x3F) << 6) | (s[2] & 0x3F);
		return 3;
	} else if (U4(s[0])) {
		*ch = ((s[0] & 0x07) << 18) | ((s[1] & 0x3F) << 12)
		    | ((s[2] & 0x3F) << 6) | (s[3] & 0x3F);
		return 4;
	}

	unreachable();
}

int
rtou8(char8_t *s, rune ch)
{
	if (ch < 0x80) {
		s[0] = ch;
		return 1;
	} else if (ch < 0x800) {
		s[0] = (ch >> 6) | 0xC0;
		s[1] = (ch & 0x3F) | 0x80;
		return 2;
	} else if (ch < 0x10000) {
		s[0] = (ch >> 12) | 0xE0;
		s[1] = ((ch >> 6) & 0x3F) | 0x80;
		s[2] = (ch & 0x3F) | 0x80;
		return 3;
	} else if (ch < 0x110000) {
		s[0] = (ch >> 18) | 0xF0;
		s[1] = ((ch >> 12) & 0x3F) | 0x80;
		s[2] = ((ch >> 6) & 0x3F) | 0x80;
		s[3] = (ch & 0x3F) | 0x80;
		return 4;
	}

	unreachable();
}
