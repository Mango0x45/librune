#include <string.h>

#include "utf8.h"

#include "internal/common.h"

const char8_t *
u8chr(const char8_t *s, rune ch1)
{
	rune ch2;

	if (ch1 <= _1B_MAX)
		return (const char8_t *)strchr((char *)s, ch1);
	while ((s = u8next(&ch2, s))) {
		if (ch1 == ch2)
			break;
	}
	return s;
}
