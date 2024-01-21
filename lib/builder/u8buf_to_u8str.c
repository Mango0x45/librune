#include <stdlib.h>

#include "builder.h"

#include "internal/common.h"

struct u8str *
u8buf_to_u8str(struct u8str *s, struct u8buf *b)
{
	return (b->p = realloc(b->p, b->len)) ? s = (struct u8str *)b : nullptr;
}
