// program that prints count of words.


#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c, wc = 0, state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++wc;
		}
	}
	printf("word count = %d\n", wc);
}
