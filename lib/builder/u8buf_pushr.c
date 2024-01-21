#include "builder.h"
#include "utf8.h"

#include "internal/common.h"

struct u8buf *
u8buf_pushr(struct u8buf *b, rune ch)
{
	if (!u8buf_grow(b, b->len + u8wdth(ch)))
		return nullptr;
	b->len += rtou8(b->p + b->len, ch, b->cap - b->len);
	return b;
}
