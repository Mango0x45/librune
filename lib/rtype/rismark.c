#include "rtype.h"

bool
rismark(rune ch)
{
	return runeisc(ch, UC_M);
}
