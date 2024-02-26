#include "rtype.h"
#include "rune.h"

#include "internal/rtype/suc.h"

#define DEFAULT       ch
#define HAS_VALUE     1
#define TABLE         rtype_suc_tbl
#define TYPE          rune
#define RANGE         0
#define INITIAL_INDEX (ch / 3)
#include "internal/rtype/lookup-func.h"

rune
rprop_get_suc(rune ch)
{
	return lookup(ch);
}
