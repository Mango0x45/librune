#include "rtype.h"

#include "internal/rtype/nt.h"

#define DEFAULT      NT_NONE
#define HAS_VALUE    1
#define LATIN1_TABLE rtype_nt_lat1_tbl
#define TABLE        rtype_nt_tbl
#define TYPE         numeric_type_bf
#include "internal/rtype/lookup-func.h"

numeric_type_bf
rprop_get_numeric_type(rune ch)
{
	return lookup(ch);
}
