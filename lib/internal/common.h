#ifndef RUNE_INTERNAL_COMMON_H
#define RUNE_INTERNAL_COMMON_H

#if __STDC_VERSION__ >= 202311L
#	define RUNE_IS_23 1
#endif

#if !RUNE_IS_23
#	include <stdbool.h>
#	include <stddef.h>
#	define nullptr NULL
#endif

#ifndef unreachable
#	if RUNE_IS_23
#		include <stddef.h>
#	elif defined(__GNUC__) || defined(__clang__)
#		define unreachable() __builtin_unreachable()
#	else
#		define unreachable() \
			do \
				*(int *)0 = 0; \
			while (0)
#	endif
#endif

#endif /* !RUNE_INTERNAL_COMMON_H */
