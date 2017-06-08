// program that stores word length count in an array

#include <stdio.h>

#define MAXWORD 11         // maximum length of word
#define IN      1          // inside a word
#define OUT     0          // outside a word

main()
{
	int c, i, nc, state;
	int wl[MAXWORD];	// word length counter
	int ovflow = 0;

	nc = 0;            // number of chars
	state = OUT;

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0) {
				if (nc < MAXWORD)
					++wl[nc];
				else
					++ovflow;
			}
			nc = 0;
		}
		else if (state == OUT) {
			state = IN;
			nc = 1;
		}
		else
			++nc;
	}
	for (i = 0; i < MAXWORD; ++i)
		printf("%d%3d\n", i, wl[i]);
	printf("%d words exceeded maximum word limit\n", ovflow);
}
