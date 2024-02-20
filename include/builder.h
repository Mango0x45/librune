#ifndef RUNE_BUILDER_H
#define RUNE_BUILDER_H

#define _RUNE_NEEDS_U8VIEW 1
#include "internal/types.h" /* IWYU pragma: export */

struct u8str {
	char8_t *p;
	size_t len, cap;
};

struct u8str *u8strinit(struct u8str *, size_t);
struct u8str *u8strgrow(struct u8str *, size_t);
struct u8str *u8strfit(struct u8str *);
void u8strfree(struct u8str);

struct u8str *u8strpushr(struct u8str *, rune);
struct u8str *u8strpushstr(struct u8str *, const char *);
struct u8str *u8strpushu8(struct u8str *, struct u8view);

[[gnu::always_inline]] static inline struct u8view
u8strtou8(struct u8str s)
{
	return (struct u8view){.p = s.p, .len = s.len};
}

#define u8strpush(SB, X) \
	_Generic((X), \
	    char: u8strpushr, \
	    int: u8strpushr, \
	    rune: u8strpushr, \
	    char *: u8strpushstr, \
	    struct u8view: u8strpushu8)((SB), (X))

#endif /* !RUNE_BUILDER_H */
