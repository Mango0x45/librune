#include <stdlib.h>

#include "builder.h"

void
u8buf_free(struct u8buf b)
{
	free(b.p);
}
