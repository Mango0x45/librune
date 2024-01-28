#include "rtype.h"

bool
risnumber(rune ch)
{
	return runeisc(ch, UC_N);
}
