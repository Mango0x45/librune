#include "gbrk.h"
#include "mbstring.h"

/* WARNING: This implementation is shit! */

size_t
u8gprev(struct u8view *g, const char8_t **p, const char8_t *start)
{
	rune _;
	const char8_t *orig = *p;

	if (orig == start)
		return 0;

	while (u8prev(&_, p, start)) {
		size_t n = orig - *p;
		const char8_t *cpy = *p;
		u8gnext(g, &cpy, &n);
		if (cpy < orig) {
			*g = (struct u8view){
				.p = *p = cpy,
				.len = orig - cpy,
			};
			return g->len;
		}
	}

	*g = (struct u8view){
		.p = start,
		.len = orig - start,
	};
	return g->len;
}
