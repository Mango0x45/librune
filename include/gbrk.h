#ifndef RUNE_GBRK_H
#define RUNE_GBRK_H

#include "unicode.h"

#define _RUNE_NEEDS_U8VIEW 1
#include "internal/types.h" /* IWYU pragma: export */

/* Note to self: Always keep this on the next version */
static_assert(!UNICODE_PREREQ(15, 1, 1),
              "Sanity check: ensure gbrk.h conforms to Unicode > 15.1.0");

size_t u8glen(const char8_t *, size_t);
size_t u8gnext(struct u8view *, const char8_t **, size_t *);
size_t u8gprev(struct u8view *, const char8_t **, const char8_t *);

#endif /* !RUNE_GBRK_H */
