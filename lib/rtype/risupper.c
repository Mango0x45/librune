#include "rtype.h"

bool
risupper(rune ch)
{
	return rprop_get_general_category(ch) & GC_LU;
}
