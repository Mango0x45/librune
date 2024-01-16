#include "gbrk.h"

size_t
u8glen(const char8_t *s, size_t n)
{
	size_t m = 0;
	union {
		const char8_t *p;
		size_t sz;
	} unused;

	while ((s = u8gnext(&unused.p, &unused.sz, s, &n)))
		m++;

	return m;
}
