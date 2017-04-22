// program that replaces multiple blanks with single blank.


#include <stdio.h>
#define NONBLANK 'a'

main()
{
	int c, lastc;
	lastc = NONBLANK;

	while ((c = getchar()) != EOF) {
		if (c != ' ' || lastc != c)
			putchar(c);
		lastc = c;
	}
}
