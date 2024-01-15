#include "utf8.h"

size_t
u8len(const char8_t *s)
{
	rune unused;
	size_t n = 0;

	while ((s = u8next(&unused, s)))
		n++;

	return n;
}
