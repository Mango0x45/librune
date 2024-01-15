#include "utf8.h"

#include "internal/common.h"

const char8_t *
u8next(rune *ch, const char8_t *s)
{
	return *s ? s + u8tor(ch, s) : nullptr;
}
