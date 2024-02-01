#include "rtype.h"
#include "rune.h"

bool
rprop_ids_trinary_operator(rune ch)
{
	return ch == RUNE_C(0x2FF2) || ch == RUNE_C(0x2FF3);
}
