// program that replaces multiple space with single space.


#include <stdio.h>
#define NONBLANK 'a'
main()
{
	int c, lastc;
	lastc = NONBLANK;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
		}
		else if (lastc != ' ') {
			putchar(c);
		}
		lastc = c;
	}
}
