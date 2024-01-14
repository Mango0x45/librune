#ifndef RUNE_INTERNAL_UNDEFINED_H
#define RUNE_INTERNAL_UNDEFINED_H

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

#endif /* !RUNE_INTERNAL_UNDEFINED_H */
