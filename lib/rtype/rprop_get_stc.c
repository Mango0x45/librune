#include "rtype.h"
#include "rune.h"

#include "internal/rtype/stc.h"

#define DEFAULT       ch
#define HAS_VALUE     1
#define LATIN1_TABLE  rtype_stc_lat1_tbl
#define TABLE         rtype_stc_tbl
#define TYPE          rune
#define RANGE         0
#define INITIAL_INDEX (ch / 3)
#include "internal/rtype/lookup-func.h"

rune
rprop_get_stc(rune ch)
{
	return lookup(ch);
}
