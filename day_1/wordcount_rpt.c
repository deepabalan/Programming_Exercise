#include <stdio.h>
#define IN 1        /* inside a word */
#define OUT 0       /* outside a word */
main()
{
	int c, state = OUT, wc = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
		        ++wc;
		}
	}
	printf("word count = %d\n", wc);
}
