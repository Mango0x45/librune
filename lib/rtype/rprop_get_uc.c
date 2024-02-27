#include "rtype.h"
#include "rune.h"

#include "internal/common.h"

/* clang-format off */

#define MAPPING(s) (struct rmapping) _(s)
#define _(s)       {.p = s, .len = lengthof(s) - 1}

static const struct {
	rune from;
	struct rmapping to;
} mappings[] = {
	{.from = RUNE_C(0x0149), .to = _(U"\u02BC\x4E")},
	{.from = RUNE_C(0x01f0), .to = _(U"\x4A\u030C")},
	{.from = RUNE_C(0x0390), .to = _(U"\u0399\u0308\u0301")},
	{.from = RUNE_C(0x03b0), .to = _(U"\u03A5\u0308\u0301")},
	{.from = RUNE_C(0x0587), .to = _(U"\u0535\u0552")},
	{.from = RUNE_C(0x1e96), .to = _(U"\x48\u0331")},
	{.from = RUNE_C(0x1e97), .to = _(U"\x54\u0308")},
	{.from = RUNE_C(0x1e98), .to = _(U"\x57\u030A")},
	{.from = RUNE_C(0x1e99), .to = _(U"\x59\u030A")},
	{.from = RUNE_C(0x1e9a), .to = _(U"\x41\u02BE")},
	{.from = RUNE_C(0x1f50), .to = _(U"\u03A5\u0313")},
	{.from = RUNE_C(0x1f52), .to = _(U"\u03A5\u0313\u0300")},
	{.from = RUNE_C(0x1f54), .to = _(U"\u03A5\u0313\u0301")},
	{.from = RUNE_C(0x1f56), .to = _(U"\u03A5\u0313\u0342")},
	{.from = RUNE_C(0x1f80), .to = _(U"\u1F08\u0399")},
	{.from = RUNE_C(0x1f81), .to = _(U"\u1F09\u0399")},
	{.from = RUNE_C(0x1f82), .to = _(U"\u1F0A\u0399")},
	{.from = RUNE_C(0x1f83), .to = _(U"\u1F0B\u0399")},
	{.from = RUNE_C(0x1f84), .to = _(U"\u1F0C\u0399")},
	{.from = RUNE_C(0x1f85), .to = _(U"\u1F0D\u0399")},
	{.from = RUNE_C(0x1f86), .to = _(U"\u1F0E\u0399")},
	{.from = RUNE_C(0x1f87), .to = _(U"\u1F0F\u0399")},
	{.from = RUNE_C(0x1f88), .to = _(U"\u1F08\u0399")},
	{.from = RUNE_C(0x1f89), .to = _(U"\u1F09\u0399")},
	{.from = RUNE_C(0x1f8a), .to = _(U"\u1F0A\u0399")},
	{.from = RUNE_C(0x1f8b), .to = _(U"\u1F0B\u0399")},
	{.from = RUNE_C(0x1f8c), .to = _(U"\u1F0C\u0399")},
	{.from = RUNE_C(0x1f8d), .to = _(U"\u1F0D\u0399")},
	{.from = RUNE_C(0x1f8e), .to = _(U"\u1F0E\u0399")},
	{.from = RUNE_C(0x1f8f), .to = _(U"\u1F0F\u0399")},
	{.from = RUNE_C(0x1f90), .to = _(U"\u1F28\u0399")},
	{.from = RUNE_C(0x1f91), .to = _(U"\u1F29\u0399")},
	{.from = RUNE_C(0x1f92), .to = _(U"\u1F2A\u0399")},
	{.from = RUNE_C(0x1f93), .to = _(U"\u1F2B\u0399")},
	{.from = RUNE_C(0x1f94), .to = _(U"\u1F2C\u0399")},
	{.from = RUNE_C(0x1f95), .to = _(U"\u1F2D\u0399")},
	{.from = RUNE_C(0x1f96), .to = _(U"\u1F2E\u0399")},
	{.from = RUNE_C(0x1f97), .to = _(U"\u1F2F\u0399")},
	{.from = RUNE_C(0x1f98), .to = _(U"\u1F28\u0399")},
	{.from = RUNE_C(0x1f99), .to = _(U"\u1F29\u0399")},
	{.from = RUNE_C(0x1f9a), .to = _(U"\u1F2A\u0399")},
	{.from = RUNE_C(0x1f9b), .to = _(U"\u1F2B\u0399")},
	{.from = RUNE_C(0x1f9c), .to = _(U"\u1F2C\u0399")},
	{.from = RUNE_C(0x1f9d), .to = _(U"\u1F2D\u0399")},
	{.from = RUNE_C(0x1f9e), .to = _(U"\u1F2E\u0399")},
	{.from = RUNE_C(0x1f9f), .to = _(U"\u1F2F\u0399")},
	{.from = RUNE_C(0x1fa0), .to = _(U"\u1F68\u0399")},
	{.from = RUNE_C(0x1fa1), .to = _(U"\u1F69\u0399")},
	{.from = RUNE_C(0x1fa2), .to = _(U"\u1F6A\u0399")},
	{.from = RUNE_C(0x1fa3), .to = _(U"\u1F6B\u0399")},
	{.from = RUNE_C(0x1fa4), .to = _(U"\u1F6C\u0399")},
	{.from = RUNE_C(0x1fa5), .to = _(U"\u1F6D\u0399")},
	{.from = RUNE_C(0x1fa6), .to = _(U"\u1F6E\u0399")},
	{.from = RUNE_C(0x1fa7), .to = _(U"\u1F6F\u0399")},
	{.from = RUNE_C(0x1fa8), .to = _(U"\u1F68\u0399")},
	{.from = RUNE_C(0x1fa9), .to = _(U"\u1F69\u0399")},
	{.from = RUNE_C(0x1faa), .to = _(U"\u1F6A\u0399")},
	{.from = RUNE_C(0x1fab), .to = _(U"\u1F6B\u0399")},
	{.from = RUNE_C(0x1fac), .to = _(U"\u1F6C\u0399")},
	{.from = RUNE_C(0x1fad), .to = _(U"\u1F6D\u0399")},
	{.from = RUNE_C(0x1fae), .to = _(U"\u1F6E\u0399")},
	{.from = RUNE_C(0x1faf), .to = _(U"\u1F6F\u0399")},
	{.from = RUNE_C(0x1fb2), .to = _(U"\u1FBA\u0399")},
	{.from = RUNE_C(0x1fb3), .to = _(U"\u0391\u0399")},
	{.from = RUNE_C(0x1fb4), .to = _(U"\u0386\u0399")},
	{.from = RUNE_C(0x1fb6), .to = _(U"\u0391\u0342")},
	{.from = RUNE_C(0x1fb7), .to = _(U"\u0391\u0342\u0399")},
	{.from = RUNE_C(0x1fbc), .to = _(U"\u0391\u0399")},
	{.from = RUNE_C(0x1fc2), .to = _(U"\u1FCA\u0399")},
	{.from = RUNE_C(0x1fc3), .to = _(U"\u0397\u0399")},
	{.from = RUNE_C(0x1fc4), .to = _(U"\u0389\u0399")},
	{.from = RUNE_C(0x1fc6), .to = _(U"\u0397\u0342")},
	{.from = RUNE_C(0x1fc7), .to = _(U"\u0397\u0342\u0399")},
	{.from = RUNE_C(0x1fcc), .to = _(U"\u0397\u0399")},
	{.from = RUNE_C(0x1fd2), .to = _(U"\u0399\u0308\u0300")},
	{.from = RUNE_C(0x1fd3), .to = _(U"\u0399\u0308\u0301")},
	{.from = RUNE_C(0x1fd6), .to = _(U"\u0399\u0342")},
	{.from = RUNE_C(0x1fd7), .to = _(U"\u0399\u0308\u0342")},
	{.from = RUNE_C(0x1fe2), .to = _(U"\u03A5\u0308\u0300")},
	{.from = RUNE_C(0x1fe3), .to = _(U"\u03A5\u0308\u0301")},
	{.from = RUNE_C(0x1fe4), .to = _(U"\u03A1\u0313")},
	{.from = RUNE_C(0x1fe6), .to = _(U"\u03A5\u0342")},
	{.from = RUNE_C(0x1fe7), .to = _(U"\u03A5\u0308\u0342")},
	{.from = RUNE_C(0x1ff2), .to = _(U"\u1FFA\u0399")},
	{.from = RUNE_C(0x1ff3), .to = _(U"\u03A9\u0399")},
	{.from = RUNE_C(0x1ff4), .to = _(U"\u038F\u0399")},
	{.from = RUNE_C(0x1ff6), .to = _(U"\u03A9\u0342")},
	{.from = RUNE_C(0x1ff7), .to = _(U"\u03A9\u0342\u0399")},
	{.from = RUNE_C(0x1ffc), .to = _(U"\u03A9\u0399")},
	{.from = RUNE_C(0xfb00), .to = _(U"\x46\x46")},
	{.from = RUNE_C(0xfb01), .to = _(U"\x46\x49")},
	{.from = RUNE_C(0xfb02), .to = _(U"\x46\x4C")},
	{.from = RUNE_C(0xfb03), .to = _(U"\x46\x46\x49")},
	{.from = RUNE_C(0xfb04), .to = _(U"\x46\x46\x4C")},
	{.from = RUNE_C(0xfb05), .to = _(U"\x53\x54")},
	{.from = RUNE_C(0xfb06), .to = _(U"\x53\x54")},
	{.from = RUNE_C(0xfb13), .to = _(U"\u0544\u0546")},
	{.from = RUNE_C(0xfb14), .to = _(U"\u0544\u0535")},
	{.from = RUNE_C(0xfb15), .to = _(U"\u0544\u053B")},
	{.from = RUNE_C(0xfb16), .to = _(U"\u054E\u0546")},
	{.from = RUNE_C(0xfb17), .to = _(U"\u0544\u053D")},
};

/* clang-format on */

struct rmapping
rprop_get_uc(rune ch, struct ucctx ctx)
{
	rune _ch;

	if (ch == U'ß')
		return ctx.cap_eszett ? MAPPING(U"ẞ") : MAPPING(U"SS");
	if (ch == 'i' && ctx.az_or_tr)
		return MAPPING(U"İ");
	if (ch == 0x307 && ctx.lt_after_i)
		return MAPPING(U"");

	if (ch != (_ch = rprop_get_suc(ch))) {
		return (struct rmapping){
			.p = {_ch},
			.len = 1,
		};
	}

	/* TODO: Binary search? */
	for (size_t i = 0; i < lengthof(mappings); i++) {
		if (mappings[i].from == ch)
			return mappings[i].to;
	}

	return (struct rmapping){
		.p = {ch},
		.len = 1,
	};
}
