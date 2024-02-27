#include "rtype.h"
#include "rune.h"

#include "internal/common.h"

/* clang-format off */

static const struct {
	rune from;
	struct rmapping to;
} mappings[] = {
	{.from = RUNE_C(0x0149), .to = {.p = U"\u02BC\x4E",         .len = 2}},
	{.from = RUNE_C(0x01F0), .to = {.p = U"\x4A\u030C",         .len = 2}},
	{.from = RUNE_C(0x0390), .to = {.p = U"\u0399\u0308\u0301", .len = 3}},
	{.from = RUNE_C(0x03B0), .to = {.p = U"\u03A5\u0308\u0301", .len = 3}},
	{.from = RUNE_C(0x0587), .to = {.p = U"\u0535\u0552",       .len = 2}},
	{.from = RUNE_C(0x1E96), .to = {.p = U"\x48\u0331",         .len = 2}},
	{.from = RUNE_C(0x1E97), .to = {.p = U"\x54\u0308",         .len = 2}},
	{.from = RUNE_C(0x1E98), .to = {.p = U"\x57\u030A",         .len = 2}},
	{.from = RUNE_C(0x1E99), .to = {.p = U"\x59\u030A",         .len = 2}},
	{.from = RUNE_C(0x1E9A), .to = {.p = U"\x41\u02BE",         .len = 2}},
	{.from = RUNE_C(0x1F50), .to = {.p = U"\u03A5\u0313",       .len = 2}},
	{.from = RUNE_C(0x1F52), .to = {.p = U"\u03A5\u0313\u0300", .len = 3}},
	{.from = RUNE_C(0x1F54), .to = {.p = U"\u03A5\u0313\u0301", .len = 3}},
	{.from = RUNE_C(0x1F56), .to = {.p = U"\u03A5\u0313\u0342", .len = 3}},
	{.from = RUNE_C(0x1F80), .to = {.p = U"\u1F08\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F81), .to = {.p = U"\u1F09\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F82), .to = {.p = U"\u1F0A\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F83), .to = {.p = U"\u1F0B\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F84), .to = {.p = U"\u1F0C\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F85), .to = {.p = U"\u1F0D\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F86), .to = {.p = U"\u1F0E\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F87), .to = {.p = U"\u1F0F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F88), .to = {.p = U"\u1F08\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F89), .to = {.p = U"\u1F09\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F8A), .to = {.p = U"\u1F0A\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F8B), .to = {.p = U"\u1F0B\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F8C), .to = {.p = U"\u1F0C\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F8D), .to = {.p = U"\u1F0D\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F8E), .to = {.p = U"\u1F0E\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F8F), .to = {.p = U"\u1F0F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F90), .to = {.p = U"\u1F28\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F91), .to = {.p = U"\u1F29\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F92), .to = {.p = U"\u1F2A\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F93), .to = {.p = U"\u1F2B\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F94), .to = {.p = U"\u1F2C\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F95), .to = {.p = U"\u1F2D\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F96), .to = {.p = U"\u1F2E\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F97), .to = {.p = U"\u1F2F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F98), .to = {.p = U"\u1F28\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F99), .to = {.p = U"\u1F29\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F9A), .to = {.p = U"\u1F2A\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F9B), .to = {.p = U"\u1F2B\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F9C), .to = {.p = U"\u1F2C\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F9D), .to = {.p = U"\u1F2D\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F9E), .to = {.p = U"\u1F2E\u0399",       .len = 2}},
	{.from = RUNE_C(0x1F9F), .to = {.p = U"\u1F2F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA0), .to = {.p = U"\u1F68\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA1), .to = {.p = U"\u1F69\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA2), .to = {.p = U"\u1F6A\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA3), .to = {.p = U"\u1F6B\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA4), .to = {.p = U"\u1F6C\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA5), .to = {.p = U"\u1F6D\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA6), .to = {.p = U"\u1F6E\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA7), .to = {.p = U"\u1F6F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA8), .to = {.p = U"\u1F68\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FA9), .to = {.p = U"\u1F69\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FAA), .to = {.p = U"\u1F6A\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FAB), .to = {.p = U"\u1F6B\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FAC), .to = {.p = U"\u1F6C\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FAD), .to = {.p = U"\u1F6D\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FAE), .to = {.p = U"\u1F6E\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FAF), .to = {.p = U"\u1F6F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FB2), .to = {.p = U"\u1FBA\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FB3), .to = {.p = U"\u0391\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FB4), .to = {.p = U"\u0386\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FB6), .to = {.p = U"\u0391\u0342",       .len = 2}},
	{.from = RUNE_C(0x1FB7), .to = {.p = U"\u0391\u0342\u0399", .len = 3}},
	{.from = RUNE_C(0x1FBC), .to = {.p = U"\u0391\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FC2), .to = {.p = U"\u1FCA\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FC3), .to = {.p = U"\u0397\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FC4), .to = {.p = U"\u0389\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FC6), .to = {.p = U"\u0397\u0342",       .len = 2}},
	{.from = RUNE_C(0x1FC7), .to = {.p = U"\u0397\u0342\u0399", .len = 3}},
	{.from = RUNE_C(0x1FCC), .to = {.p = U"\u0397\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FD2), .to = {.p = U"\u0399\u0308\u0300", .len = 3}},
	{.from = RUNE_C(0x1FD3), .to = {.p = U"\u0399\u0308\u0301", .len = 3}},
	{.from = RUNE_C(0x1FD6), .to = {.p = U"\u0399\u0342",       .len = 2}},
	{.from = RUNE_C(0x1FD7), .to = {.p = U"\u0399\u0308\u0342", .len = 3}},
	{.from = RUNE_C(0x1FE2), .to = {.p = U"\u03A5\u0308\u0300", .len = 3}},
	{.from = RUNE_C(0x1FE3), .to = {.p = U"\u03A5\u0308\u0301", .len = 3}},
	{.from = RUNE_C(0x1FE4), .to = {.p = U"\u03A1\u0313",       .len = 2}},
	{.from = RUNE_C(0x1FE6), .to = {.p = U"\u03A5\u0342",       .len = 2}},
	{.from = RUNE_C(0x1FE7), .to = {.p = U"\u03A5\u0308\u0342", .len = 3}},
	{.from = RUNE_C(0x1FF2), .to = {.p = U"\u1FFA\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FF3), .to = {.p = U"\u03A9\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FF4), .to = {.p = U"\u038F\u0399",       .len = 2}},
	{.from = RUNE_C(0x1FF6), .to = {.p = U"\u03A9\u0342",       .len = 2}},
	{.from = RUNE_C(0x1FF7), .to = {.p = U"\u03A9\u0342\u0399", .len = 3}},
	{.from = RUNE_C(0x1FFC), .to = {.p = U"\u03A9\u0399",       .len = 2}},
	{.from = RUNE_C(0xFB00), .to = {.p = U"\x46\x46",           .len = 2}},
	{.from = RUNE_C(0xFB01), .to = {.p = U"\x46\x49",           .len = 2}},
	{.from = RUNE_C(0xFB02), .to = {.p = U"\x46\x4C",           .len = 2}},
	{.from = RUNE_C(0xFB03), .to = {.p = U"\x46\x46\x49",       .len = 3}},
	{.from = RUNE_C(0xFB04), .to = {.p = U"\x46\x46\x4C",       .len = 3}},
	{.from = RUNE_C(0xFB05), .to = {.p = U"\x53\x54",           .len = 2}},
	{.from = RUNE_C(0xFB06), .to = {.p = U"\x53\x54",           .len = 2}},
	{.from = RUNE_C(0xFB13), .to = {.p = U"\u0544\u0546",       .len = 2}},
	{.from = RUNE_C(0xFB14), .to = {.p = U"\u0544\u0535",       .len = 2}},
	{.from = RUNE_C(0xFB15), .to = {.p = U"\u0544\u053B",       .len = 2}},
	{.from = RUNE_C(0xFB16), .to = {.p = U"\u054E\u0546",       .len = 2}},
	{.from = RUNE_C(0xFB17), .to = {.p = U"\u0544\u053D",       .len = 2}},
};

/* clang-format on */

struct rmapping
rprop_get_uc(rune ch, struct ucctx ctx)
{
	rune _ch;

	if (ch == U'ß') {
		return ctx.cap_eszett ? (struct rmapping){.p = U"ẞ", .len = 1}
		                      : (struct rmapping){.p = U"SS", .len = 2};
	}
	if (ch == 'i' && ctx.az_or_tr)
		return (struct rmapping){.p = U"İ", .len = 1};
	if (ch == 0x307 && ctx.lt_after_i)
		return (struct rmapping){};

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
