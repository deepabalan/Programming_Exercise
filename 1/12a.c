// Write a program that prints its input one word per line.


#include <stdio.h>
#define IN  1
#define OUT 0

main()
{
	int c, state;
	state = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state ==  OUT) {
				state = IN;
				putchar('\n');
			}
		}
		else {
			state = OUT;
			putchar(c);
		}
	}
}
