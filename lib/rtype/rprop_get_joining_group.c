#include "rtype.h"

#include "internal/common.h"
#include "internal/rtype/jg.h"

#define DEFAULT   JG_NONE
#define HAS_VALUE 1
#define TABLE     rtype_jg_tbl
#define TYPE      enum joining_group
#include "internal/rtype/lookup-func.h"

enum joining_group
rprop_get_joining_group(rune ch)
{
	return ch <= LATIN1_MAX ? false : lookup(ch);
}
