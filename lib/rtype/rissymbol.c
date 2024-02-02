#include "rtype.h"

bool
rissymbol(rune ch)
{
	return rprop_get_general_category(ch) & GC_S;
}
