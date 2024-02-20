#include <stddef.h>

#include "mbstring.h"

#include "internal/common.h"

int
u8rsize(const char8_t *s)
{
	if (U1(*s))
		return 1;
	else if (U2(*s))
		return 2;
	else if (U3(*s))
		return 3;
	else if (U4(*s))
		return 4;
	return 1;
}
