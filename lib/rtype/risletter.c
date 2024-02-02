#include "rtype.h"

bool
risletter(rune ch)
{
	return rprop_get_general_category(ch) & GC_L;
}
