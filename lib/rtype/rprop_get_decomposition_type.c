#include "rtype.h"

#include "internal/rtype/dt.h"

#define DEFAULT      DT_NONE
#define HAS_VALUE    1
#define LATIN1_TABLE rtype_dt_lat1_tbl
#define TABLE        rtype_dt_tbl
#define TYPE         decomposition_type_bf
#include "internal/rtype/lookup-func.h"

decomposition_type_bf
rprop_get_decomposition_type(rune ch)
{
	return lookup(ch);
}
