#include "rtype.h"

bool
ristitle(rune ch)
{
	return rprop_get_general_category(ch) & GC_LT;
}
