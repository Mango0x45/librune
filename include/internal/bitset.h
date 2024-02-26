#ifndef RUNE_INTERNAL_BITSET_H
#define RUNE_INTERNAL_BITSET_H

#include <limits.h>

#define _BSNB(a)    (sizeof(a[0]) * CHAR_BIT)
#define BSCHK(a, i) ((a)[(i) / _BSNB(a)] & (1 << ((i) % _BSNB(a))))

#endif /* !RUNE_INTERNAL_BITSET_H */
