#include "rtype.h"

bool
risgraph(rune ch)
{
	return runeisc(ch, UC_L | UC_M | UC_N | UC_P | UC_ZS);
}
