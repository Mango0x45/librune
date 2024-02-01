#include "rtype.h"
#include "rune.h"

bool
rprop_ids_unary_operator(rune ch)
{
	return ch == RUNE_C(0x2FFE) || ch == RUNE_C(0x2FFF);
}
