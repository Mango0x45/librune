#include "rtype.h"

bool
risnumber(rune ch)
{
	return rprop_get_general_category(ch) & GC_N;
}
