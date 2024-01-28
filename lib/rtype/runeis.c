#include "rtype.h"

#include "internal/rtype/cat.h"

#define TYPE         enum unicat
#define DEFAULT      UC_CN
#define TABLE        rtype_cat_tbl
#define LATIN1_TABLE rtype_cat_lat1_tbl
#include "internal/rtype/lookup-func.h"

bool
runeis(rune ch, enum unicat c)
{
	return lookup(ch) & c;
}
