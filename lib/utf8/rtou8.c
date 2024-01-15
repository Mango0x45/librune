#include "utf8.h"

#include "internal/common.h"

int
rtou8(char8_t *s, rune ch)
{
	if (ch <= _1B_MAX) {
		s[0] = ch;
		return 1;
	} else if (ch <= _2B_MAX) {
		s[0] = (ch >> 6) | 0xC0;
		s[1] = (ch & 0x3F) | 0x80;
		return 2;
	} else if (ch <= _3B_MAX) {
		s[0] = (ch >> 12) | 0xE0;
		s[1] = ((ch >> 6) & 0x3F) | 0x80;
		s[2] = (ch & 0x3F) | 0x80;
		return 3;
	} else if (ch <= _4B_MAX) {
		s[0] = (ch >> 18) | 0xF0;
		s[1] = ((ch >> 12) & 0x3F) | 0x80;
		s[2] = ((ch >> 6) & 0x3F) | 0x80;
		s[3] = (ch & 0x3F) | 0x80;
		return 4;
	}

	unreachable();
}
