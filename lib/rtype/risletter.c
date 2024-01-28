#include "rtype.h"

bool
risletter(rune ch)
{
	return runeisc(ch, UC_L);
}
