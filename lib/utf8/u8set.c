#include <string.h>

#include "utf8.h"

#include "internal/common.h"

const char8_t *
u8set(const char8_t *s, rune ch, size_t n)
{
	int m;
	char8_t buf[U8_LEN_MAX];

	if (ch <= _1B_MAX)
		return memset((char *)s, ch, n);
	m = rtou8(buf, ch, sizeof(buf));
	if (n % m != 0)
		unreachable();
	for (size_t i = 0; i < n; i += m)
		memcpy((char *)s + i, buf, m);

	return s;
}
