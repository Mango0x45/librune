#include "utf8.h"

#include "internal/common.h"

static char *
_strchrnul(const char *p, int c)
{
	while (*p && *p != c)
		p++;
	return (char *)p;
}

const char8_t *
u8chrnul(const char8_t *s, rune ch1)
{
	rune ch2;

	if (ch1 <= _1B_MAX)
		return (const char8_t *)_strchrnul((char *)s, ch1);
	for (int n = u8tor(&ch2, s); *s && ch1 != ch2; s += n)
		;
	return s;
}
