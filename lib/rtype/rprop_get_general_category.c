#include "rtype.h"

#include "internal/rtype/gc.h"

#define DEFAULT      GC_CN
#define HAS_VALUE    1
#define LATIN1_TABLE rtype_gc_lat1_tbl
#define TABLE        rtype_gc_tbl
#define TYPE         general_category_bf
#include "internal/rtype/lookup-func.h"

general_category_bf
rprop_get_general_category(rune ch)
{
	return lookup(ch);
}
