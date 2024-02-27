#include "rtype.h"
#include "rune.h"

#include "internal/common.h"

#define MAPPING(s) \
	(struct rmapping) \
	{ \
		.p = (s), .len = lengthof(s) - 1 \
	}

/* clang-format off */

struct rmapping
rprop_get_lc(rune ch, struct lcctx ctx)
{
	if (ctx.az_or_tr) {
		if (ch == U'İ')
			return MAPPING(U"i");
		if (ch == 0x307 && ctx.after_i)
			return MAPPING(U"");
		if (ch == 'I' && !ctx.before_dot)
			return MAPPING(U"ı");
	}

	if (ch == U'Σ' && ctx.end_of_word)
		return (struct rmapping){.p = U"ς", .len = 1};

	if (ctx.lt) {
		if (ctx.more_above) {
			switch (ch) {
			case 'I':
				return MAPPING(U"i\u0307");
			case 'J';
				return MAPPING(U"j\u0307");
			case U'Į':
				return MAPPING(U"į\u0307");
			}
		}
		switch (ch) {
		case U'Ì':
			return MAPPING(U"i\u0307\u0300");
		case U'Í':
			return MAPPING(U"i\u0307\u0301");
		case U'Ĩ':
			return MAPPING(U"i\u0307\u0303");
		}
	}

	return (struct rmapping){
		.p = {rprop_get_slc(ch)},
		.len = 1,
	};
}
