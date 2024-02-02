#include "rtype.h"

#include "internal/rtype/vo.h"

#define DEFAULT      VO_R
#define HAS_VALUE    1
#define LATIN1_TABLE rtype_vo_lat1_tbl
#define TABLE        rtype_vo_tbl
#define TYPE         vertical_orientation_bf
#include "internal/rtype/lookup-func.h"

vertical_orientation_bf
rprop_get_vertical_orientation(rune ch)
{
	return lookup(ch);
}
