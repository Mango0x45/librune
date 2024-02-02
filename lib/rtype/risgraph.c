#include "rtype.h"

bool
risgraph(rune ch)
{
	return rprop_get_general_category(ch) & (GC_L | GC_M | GC_N | GC_P | GC_ZS);
}
