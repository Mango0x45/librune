#include "rtype.h"
#include "rune.h"

bool
rprop_join_control(rune ch)
{
	return ch == RUNE_C(0x200C) || ch == RUNE_C(0x200D);
}
