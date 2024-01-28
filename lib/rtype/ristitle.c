#include "rtype.h"

bool
ristitle(rune ch)
{
	return runeisc(ch, UC_LT);
}
