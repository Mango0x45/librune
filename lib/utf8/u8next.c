#define _RUNE_NO_MACRO_WRAPPER 1
#include "utf8.h"

#include "internal/common.h"

char8_t *
u8next(rune *ch, const char8_t **s, size_t *n)
{
	int m;

	if (*n == 0)
		return nullptr;
	*n -= m = u8tor_uc(ch, *s);
	return (char8_t *)(*s += m);
}
