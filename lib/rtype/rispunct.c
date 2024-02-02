#include "rtype.h"

bool
rispunct(rune ch)
{
	return rprop_get_general_category(ch) & GC_P;
}
