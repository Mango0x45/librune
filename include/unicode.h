#ifndef RUNE_UNICODE_H
#define RUNE_UNICODE_H

#define UNICODE_MAJOR  15
#define UNICODE_MINOR  1
#define UNICODE_UPDATE 0

#define UNICODE_PREREQ(maj, min, up) \
	((UNICODE_MAJOR > (maj)) \
	 || (UNICODE_MAJOR == (maj) && UNICODE_MINOR > (min)) \
	 || (UNICODE_MAJOR == (maj) && UNICODE_MINOR == (min) \
	     && UNICODE_UPDATE >= (up)))

#endif /* !RUNE_UNICODE_H */
