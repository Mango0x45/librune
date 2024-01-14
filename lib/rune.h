#ifndef RUNE_RUNE_H
#define RUNE_RUNE_H

#include <inttypes.h>

#include "internal/types.h"

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

#define RUNE_ERROR ((rune)0xFFFD)
#define RUNE_MAX   ((rune)RUNE_C(0x10FFFF))

#endif /* !RUNE_RUNE_H */
