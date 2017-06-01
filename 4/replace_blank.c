// Program that replaces multiple blanks with single blank


#include <stdio.h>
main()
{
	int c, lastc;
	lastc = ' ';

	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		else {
			if (lastc != ' ')
				putchar(c);
		}
		lastc = c;
	}
}
