#include <stddef.h>

#include "rtype.h"

#include "internal/common.h"
#include "internal/rtype_lookup.h"

[[gnu::always_inline]] static unicat
getcat(rune ch)
{
	ptrdiff_t lo, hi;

	if (ch <= LATIN1_MAX)
		return rtype_lat1_tbl[ch];

	lo = 0;
	hi = lengthof(rtype_cat_tbl) - 1;

	while (lo <= hi) {
		ptrdiff_t i = (lo + hi) / 2;

		if (ch < rtype_cat_tbl[i].lo)
			hi = i - 1;
		else if (ch > rtype_cat_tbl[i].hi)
			lo = i + 1;
		else
			return rtype_cat_tbl[i].cat;
	}

	return UC_CN;
}

bool
runeisc(rune ch, unicat c)
{
	return getcat(ch) & c;
}
