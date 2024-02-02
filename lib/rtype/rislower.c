#include "rtype.h"

bool
rislower(rune ch)
{
	return rprop_get_general_category(ch) & GC_LL;
}
