#include "rtype.h"

bool
rismark(rune ch)
{
	return rprop_get_general_category(ch) & GC_M;
}
