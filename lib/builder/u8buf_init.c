#include <stdlib.h>

#include "builder.h"

#include "internal/common.h"

struct u8buf *
u8buf_init(struct u8buf *b, size_t n)
{
	if (n && !(b->p = malloc(n)))
			return nullptr;
	b->len = 0;
	b->cap = n;
	return b;
}
