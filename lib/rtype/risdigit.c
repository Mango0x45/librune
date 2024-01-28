#include "rtype.h"

bool
risdigit(rune ch)
{
	return runeisc(ch, UC_ND);
}
