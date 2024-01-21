#include <stdlib.h>

#include "builder.h"

#include "internal/common.h"

struct u8buf *
u8buf_fit(struct u8buf *b)
{
	return (b->p = realloc(b->p, b->len)) ? b : nullptr;
}
