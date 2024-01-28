#include <stddef.h>

#include "internal/common.h"

#ifndef TYPE
#	error "TYPE if not defined"
#endif
#ifndef DEFAULT
#	error "DEFAULT is not defined"
#endif
#ifndef TABLE
#	error "TABLE is not defined"
#endif
#ifndef LATIN1_TABLE
#	error "LATIN1_TABLE is not defined"
#endif

[[gnu::always_inline]] static TYPE
lookup(rune ch)
{
	ptrdiff_t lo, hi;

	if (ch <= LATIN1_MAX)
		return LATIN1_TABLE[ch];

	lo = 0;
	hi = lengthof(TABLE) - 1;

	while (lo <= hi) {
		ptrdiff_t i = (lo + hi) / 2;

		if (ch < TABLE[i].lo)
			hi = i - 1;
		else if (ch > TABLE[i].hi)
			lo = i + 1;
		else
			return TABLE[i].val;
	}

	return DEFAULT;
}
