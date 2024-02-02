#include "rtype.h"

bool
riscntrl(rune ch)
{
	return rprop_get_general_category(ch) & GC_CC;
}
