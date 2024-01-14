#include <stddef.h>

#include "rune.h"
#include "utf8.h"

#include "internal/undefined.h"

#define U1(x) (((x)&0x80) == 0x00)
#define U2(x) (((x)&0xE0) == 0xC0)
#define U3(x) (((x)&0xF0) == 0xE0)
#define U4(x) (((x)&0xF8) == 0xF0)
#define UC(x) (((x)&0xC0) == 0x80)

static bool u8rvalid(rune);

int
u8tor(rune *ch, const char8_t *s)
{
	int n = 0;

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
	}

	if (n && u8rvalid(*ch))
		return n;

	*ch = RUNE_ERROR;
	return 1;
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

const char8_t *
u8next(rune *ch, const char8_t *s)
{
	return *s ? s + u8tor(ch, s) : NULL;
}

const char8_t *
u8next_uc(rune *ch, const char8_t *s)
{
	return *s ? s + u8tor_uc(ch, s) : NULL;
}

const char8_t *
u8prev(rune *ch, const char8_t *s, const char8_t *start)
{
	int off;
	bool match = true;
	ptrdiff_t d = s - start;

	if (d <= 0) {
		return NULL;
	} else if (U1(s[-1])) {
		*ch = s[-1];
		off = 1;
	} else if (d > 1 && UC(s[-1]) && U2(s[-2])) {
		*ch = ((s[-2] & 0x1F) << 6) | (s[-1] & 0x3F);
		off = 2;
	} else if (d > 2 && UC(s[-1]) && UC(s[-2]) && U2(s[-3])) {
		*ch = ((s[-3] & 0x0F) << 12) | ((s[-2] & 0x3F) << 6) | (s[-1] & 0x3F);
		off = 3;
	} else if (d > 3 && UC(s[-1]) && UC(s[-2]) && UC(s[-3]) && U2(s[-4])) {
		*ch = ((s[-4] & 0x07) << 18) | ((s[-3] & 0x3F) << 12)
		    | ((s[-2] & 0x3F) << 6) | (s[-1] & 0x3F);
		off = 4;
	} else
		match = false;

	if (match && u8rvalid(*ch))
		return s - off;

	*ch = RUNE_ERROR;
	return s - 1;
}

const char8_t *
u8prev_uc(rune *ch, const char8_t *s, const char8_t *start)
{
	if (s - start <= 0) {
		return NULL;
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

bool
u8rvalid(rune ch)
{
	return !((ch >= 0xD800 && ch <= 0xDFFF) || ch == 0xFFFE || ch == 0xFFFF
	         || ch > RUNE_MAX);
}
