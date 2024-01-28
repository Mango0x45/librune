#include "rtype.h"

bool
rissymbol(rune ch)
{
	return runeisc(ch, UC_S);
}
