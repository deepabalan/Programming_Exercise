// histogram of lengths of words (horizontal).


#include <stdio.h>

#define MAXHIST 15				/* max length of histogram */
#define MAXWORD 11				/* max length of a word */
#define IN 1					/* inside a word */
#define OUT 0					/* outside a word */

main()
/* print horizontal histogram */
{
	int c, i, nc, state;
	int len;				/* length of each bar */
	int maxvalue;				/* maximum value for wl[] */
	int ovflow;				/* number of overflow words */
	int wl[MAXWORD];			/* word length counters */

	state = OUT;
	nc = 0;					/* number of chars in a word */
	ovflow = 0;				/* number of words >= MAXWORD */

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0) {
				if (nc < MAXWORD) {
					++wl[nc];
				}
				else
					++ovflow;
			}
			nc = 0;
		} else if (state == OUT) {
			state = IN;
			nc = 1;			/* beginning of a new word */
		} else
			++nc;			/* inside a word */
	}
	
}
