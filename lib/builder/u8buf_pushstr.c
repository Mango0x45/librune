#include <string.h>

#include "builder.h"
#include "utf8.h"

#include "internal/common.h"

struct u8buf *
u8buf_pushstr(struct u8buf *b, const char *s)
{
	size_t n = strlen(s);
	if (!u8buf_grow(b, b->len + n))
		return nullptr;
	memcpy(b->p + b->len, s, n);
	b->len += n;
	return b;
}
