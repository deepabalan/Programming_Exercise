// replace multiple blanks with one blank

#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (state == OUT) {
				state = IN;
				putchar(c);
			}
		}
		else if (c != ' '){
			state = OUT;
			putchar(c);
		}
	}
}
