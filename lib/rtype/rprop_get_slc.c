#include "rtype.h"
#include "rune.h"

#include "internal/rtype/slc.h"

#define DEFAULT       ch
#define HAS_VALUE     1
#define LATIN1_TABLE  rtype_slc_lat1_tbl
#define TABLE         rtype_slc_tbl
#define TYPE          rune
#define RANGE         0
#define INITIAL_INDEX (ch / 3)
#include "internal/rtype/lookup-func.h"

rune
rprop_get_slc(rune ch)
{
	return lookup(ch);
}
