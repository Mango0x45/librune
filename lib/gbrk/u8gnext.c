#include <stddef.h>

#include "gbrk.h"
#include "mbstring.h"

#include "internal/gbrk_lookup.h"

struct gbrk_state {
	enum {
		GB9C_NONE,
		GB9C_CNSNT,
		GB9C_LNK,
	} gb9c;
	bool gb11 : 1;
	bool gb12 : 1;
};

static bool u8isgbrk(rune, rune, struct gbrk_state *);

#define DEFAULT   GBP_OTHER
#define HAS_VALUE 1
#define TABLE     gbrk_prop_tbl
#define TYPE      gbrk_prop
#include "internal/rtype/lookup-func.h"

size_t
u8gnext(struct u8view *g, const char8_t **s, size_t *n)
{
	int m;
	rune ch1;
	const char8_t *p;
	struct gbrk_state gs = {0};

	if (*n == 0)
		return 0;

	p = *s;
	if (g)
		g->p = p;
	p += u8tor(&ch1, p);

	for (;;) {
		rune ch2;

		if ((size_t)(p - *s) >= *n)
			ch2 = 0;
		else
			m = u8tor(&ch2, p);
		if (u8isgbrk(ch1, ch2, &gs)) {
			ptrdiff_t d = p - *s;
			*n -= d;
			*s = p;
			if (g)
				g->len = d;
			return d;
		}

		ch1 = ch2;
		p += m;
	}
}

bool
u8isgbrk(rune a, rune b, struct gbrk_state *gs)
{
	gbrk_prop ap, bp;

	/* GB1 & GB2 */
	if (!a || !b)
		goto do_break;

	/* GB3 & ASCII fast-track */
	if ((a | b) < 0x300) {
		if (a == '\r' && b == '\n')
			return false;
		goto do_break;
	}

	/* GB4 */
	if (a == '\r' || a == '\n' || ((ap = lookup(a)) & GBP_CTRL))
		goto do_break;

	/* GB5 */
	if (b == '\r' || b == '\n' || ((bp = lookup(b)) & GBP_CTRL))
		goto do_break;

	/* Setting flags for GB9c */
	if (ap & GBP_INDC_CNSNT)
		gs->gb9c = GB9C_CNSNT;
	else if ((ap & GBP_INDC_LNK) && gs->gb9c == GB9C_CNSNT)
		gs->gb9c = GB9C_LNK;

	/* GB6 */
	if ((ap & GBP_HNGL_L)
	    && (bp & (GBP_HNGL_L | GBP_HNGL_V | GBP_HNGL_LV | GBP_HNGL_LVT)))
	{
		return false;
	}

	/* GB7 */
	if ((ap & (GBP_HNGL_LV | GBP_HNGL_V)) && (bp & (GBP_HNGL_V | GBP_HNGL_T)))
		return false;

	/* GB8 */
	if ((ap & (GBP_HNGL_LVT | GBP_HNGL_T)) && (bp & GBP_HNGL_T))
		return false;

	/* GB9 */
	if (bp & (GBP_EXT | GBP_ZWJ)) {
		if (ap & GBP_PIC)
			gs->gb11 = true;
		return false;
	}

	/* GB9a */
	if (bp & GBP_SM)
		return false;

	/* GB9b */
	if (ap & GBP_PREP)
		return false;

	/* GB9c */
	if ((ap & (GBP_INDC_EXT | GBP_INDC_LNK)) && (bp & GBP_INDC_CNSNT)
	    && gs->gb9c == GB9C_LNK)
	{
		return false;
	}

	/* GB11 */
	if (gs->gb11) {
		if ((ap & GBP_EXT) && (bp & (GBP_EXT | GBP_ZWJ)))
			return false;
		if ((ap & GBP_ZWJ) && (bp & GBP_PIC))
			return false;
	}

	/* GB12 & GB13 */
	if (ap & GBP_RI) {
		if (gs->gb12 || !(bp & GBP_RI))
			goto do_break;
		gs->gb12 = true;
		return false;
	}

	/* GB999 */
do_break:
	gs->gb9c = GB9C_NONE;
	gs->gb11 = gs->gb12 = false;
	return true;
}
