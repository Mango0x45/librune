#include "rtype.h"

bool
rprop_is_regional_indicator(rune ch)
{
	return ch >= 0x1F1E6 && ch <= 0x1F1FF;
}
