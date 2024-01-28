#include "rtype.h"

bool
rispunct(rune ch)
{
	return runeisc(ch, UC_P);
}
