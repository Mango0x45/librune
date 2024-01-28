#include "rtype.h"

bool
rislower(rune ch)
{
	return runeisc(ch, UC_LL);
}
