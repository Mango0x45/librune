/* Type-definitions that most of libscript uses.

   On C23, the uchar.h header defines char8_t for UTF-8 strings.  When compiling
   on older standards or on MacOS (they don’t define uchar.h), we need to define
   it ourselves. */

#ifndef RUNE_INTERNAL_TYPES_H
#define RUNE_INTERNAL_TYPES_H

#include "c23.h"

#include <inttypes.h>
#if !RUNE_IS_23
#	include <stdbool.h>
#	include <stddef.h>
#	define nullptr NULL
#endif

typedef unsigned char char8_t;
typedef uint_fast32_t rune;

#define _RUNE_PRIDEF(c) PRI##c##FAST32
#define _RUNE_SCNDEF(c) SCN##c##FAST32

#ifdef PRIbFAST32
#	define PRIbRUNE _RUNE_PRIDEF(b)
#endif
#ifdef PRIBFAST32
#	define PRIBRUNE _RUNE_PRIDEF(B)
#endif
#define PRIdRUNE _RUNE_PRIDEF(d)
#define PRIiRUNE _RUNE_PRIDEF(i)
#define PRIuRUNE _RUNE_PRIDEF(u)
#define PRIoRUNE _RUNE_PRIDEF(o)
#define PRIxRUNE _RUNE_PRIDEF(x)
#define PRIXRUNE _RUNE_PRIDEF(X)

#ifdef SCNbFAST32
#	define SCNbRUNE _RUNE_SCNDEF(b)
#endif
#define SCNdRUNE _RUNE_SCNDEF(d)
#define SCNiRUNE _RUNE_SCNDEF(i)
#define SCNuRUNE _RUNE_SCNDEF(u)
#define SCNoRUNE _RUNE_SCNDEF(o)
#define SCNxRUNE _RUNE_SCNDEF(x)

#define RUNE_C(x) UINT32_C(x)

#endif /* !RUNE_INTERNAL_TYPES_H */
