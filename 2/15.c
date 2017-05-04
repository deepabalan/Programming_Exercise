// print input one word per line.


#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (state == IN) {
				putchar('\n');
				state = OUT;
			}
		}
		else if (state == OUT) {
			putchar(c);
                        state = IN;
		}
		else
			putchar(c);
	}
	printf("\n");
}
