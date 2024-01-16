#include "gbrk.h"

size_t
u8glen(const char8_t *s, size_t n)
{
	size_t m = n > 0;

	while ((s = u8gnext(s, &n)))
		m++;

	return m;
}