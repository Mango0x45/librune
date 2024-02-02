#include "rtype.h"

#include "internal/common.h"
#include "internal/rtype/jg.h"

#define DEFAULT   JG_NONE
#define HAS_VALUE 1
#define TABLE     rtype_jg_tbl
#define TYPE      joining_group_bf
#include "internal/rtype/lookup-func.h"

joining_group_bf
rprop_get_joining_group(rune ch)
{
	return ch <= LATIN1_MAX ? false : lookup(ch);
}
