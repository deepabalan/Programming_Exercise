#include <stdio.h>
#define IN 1        // inside a word
#define OUT 0       // outside a word

main()
{
	int c, nw = 0, state;
        state = OUT;
        
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("word count = %d\n", nw);
}
