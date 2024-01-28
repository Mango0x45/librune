#include "rtype.h"

bool
riscntrl(rune ch)
{
	return runeisc(ch, UC_CC);
}
