#include "rtype.h"

bool
risupper(rune ch)
{
	return runeisc(ch, UC_LU);
}
