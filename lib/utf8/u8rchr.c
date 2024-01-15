#include <string.h>

#include "utf8.h"

#include "internal/common.h"

const char8_t *
u8rchr(const char8_t *s, rune ch1)
{
	rune ch2;
	const char8_t *p = nullptr;

	if (ch1 <= _1B_MAX)
		return (const char8_t *)strchr((char *)s, ch1);
	for (int n = u8tor(&ch2, s); *s; s += n) {
		if (ch1 == ch2)
			p = s;
	}
	return p;
}
