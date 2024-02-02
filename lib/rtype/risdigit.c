#include "rtype.h"

bool
risdigit(rune ch)
{
	return rprop_get_general_category(ch) & GC_ND;
}
