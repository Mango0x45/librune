/* Helper macro to determine if we are building for C23 or not */

#ifndef RUNE_INTERNAL_C23_H
#define RUNE_INTERNAL_C23_H

#if __STDC_VERSION__ >= 202311L
#	define RUNE_IS_23 1
#endif

#endif /* !RUNE_INTERNAL_C23_H */
