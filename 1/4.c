// word count program in c


#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

main()
{
	int c, nl, nc, nw, state;

	state = OUT;
	nl = nc = nw = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("newlines = %d word = %d character = %d\n", nl, nw, nc);
}
