// program to replace multiple blanks with one blank


#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			state = OUT;
			putchar(c);
		}
		if (c == ' ' && state == OUT) {
			state = IN;
			putchar(c);
		}
	}
}
