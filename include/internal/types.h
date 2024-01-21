#if _RUNE_NEEDS_U8VIEW

#	if !_RUNE_HAS_U8VIEW
struct u8view {
	const char8_t *p;
	size_t len;
};
#		define _RUNE_HAS_U8VIEW 1
#	endif

#endif

#ifndef RUNE_INTERNAL_TYPES_H
#	define RUNE_INTERNAL_TYPES_H

/* IWYU pragma: private */

#	include <stddef.h> /* IWYU pragma: export */
#	include <stdint.h>

typedef unsigned char char8_t;
typedef uint_least32_t rune;

#endif /* !RUNE_INTERNAL_TYPES_H */
