// program that prints length of each word in a sentence.


#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c, i, counter = 0;
	int wc[10];
	int state = OUT;

	for (i = 0; i < 10; ++i)
		wc[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (counter > 0) {
				if (counter < 10) {
					++wc[counter];
				}
			}
			counter = 0;
		}
		else if (state == OUT) {
			state = IN;
			counter = 1;
		}
		else {
			++counter;
		}
	}
	//printf("word length");
	for (i = 0; i < 10; ++i)
		printf("%2d%4d\n", i, wc[i]);
}
