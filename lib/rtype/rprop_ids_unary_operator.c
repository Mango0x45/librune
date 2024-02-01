#include "rtype.h"
#include "rune.h"

bool
rune_has_prop_ids_unary_operator(rune ch)
{
	return ch == RUNE_C(0x2FFE) || ch == RUNE_C(0x2FFF);
}
