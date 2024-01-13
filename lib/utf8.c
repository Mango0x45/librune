#include <stddef.h>

#include "utf8.h"

#include "internal/undefined.h"

int
u8tor(rune *ch, const char8_t *s)
{
	int e, len;
	static const rune mins[] = {0x400000, 0, 0x80, 0x800, 0x10000};
	static const int msks[] = {0x00, 0x7F, 0x1F, 0x0F, 0x07};
	static const int shftc[] = {0, 18, 12, 6, 0};
	static const int shfte[] = {0, 6, 4, 2, 0};
	static const int lens[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	                           0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 3, 3, 4, 0};

	len = lens[s[0] >> 3];

	*ch = (rune)(s[0] & msks[len]) << 18;
	*ch |= (rune)(s[1] & 0x3f) << 12;
	*ch |= (rune)(s[2] & 0x3f) << 6;
	*ch |= (rune)(s[3] & 0x3f) << 0;
	*ch >>= shftc[len];

	e = (*ch < mins[len]) << 6;
	e |= (*ch > RUNE_MAX) << 8;
	e |= (s[1] & 0xC0) >> 2;
	e |= (s[2] & 0xC0) >> 4;
	e |= (s[3]) >> 6;
	e |= ((*ch >> 11) == 0x1B) << 7;
	e ^= 0x2A;
	e >>= shfte[len];

	if (e) {
		*ch = RUNE_ERROR;
		return 1;
	}
	return len;
}

int
u8tor_uc(rune *ch, const char8_t *s)
{
	int len;
	static const int msks[] = {0x00, 0x7F, 0x1F, 0x0F, 0x07};
	static const int shftc[] = {0, 18, 12, 6, 0};
	static const int lens[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	                           0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 3, 3, 4, 0};

	len = lens[s[0] >> 3];

	*ch = (rune)(s[0] & msks[len]) << 18;
	*ch |= (rune)(s[1] & 0x3f) << 12;
	*ch |= (rune)(s[2] & 0x3f) << 6;
	*ch |= (rune)(s[3] & 0x3f) << 0;
	*ch >>= shftc[len];

	return len;
}

int
rtou8(char8_t *buf, rune ch)
{
	if (ch < 0x80) {
		buf[0] = ch;
		return 1;
	} else if (ch < 0x800) {
		buf[0] = (ch >> 6) | 0xC0;
		buf[1] = (ch & 0x3F) | 0x80;
		return 2;
	} else if (ch < 0x10000) {
		buf[0] = (ch >> 12) | 0xE0;
		buf[1] = ((ch >> 6) & 0x3F) | 0x80;
		buf[2] = (ch & 0x3F) | 0x80;
		return 3;
	} else if (ch < 0x110000) {
		buf[0] = (ch >> 18) | 0xF0;
		buf[1] = ((ch >> 12) & 0x3F) | 0x80;
		buf[2] = ((ch >> 6) & 0x3F) | 0x80;
		buf[3] = (ch & 0x3F) | 0x80;
		return 4;
	}

	unreachable();
}
