#include "rtype.h"

#include "internal/rtype/jt.h"

#define DEFAULT      JT_U
#define HAS_VALUE    1
#define LATIN1_TABLE rtype_jt_lat1_tbl
#define TABLE        rtype_jt_tbl
#define TYPE         enum joining_type
#include "internal/rtype/lookup-func.h"

enum joining_type
rprop_get_joining_type(rune ch)
{
	return lookup(ch);
}
