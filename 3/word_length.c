// program that prints length of each word in a sentence.


#include <stdio.h>

main()
{
	int c, i, counter = 0;
	int wc[10];

	for (i = 0; i < 10; ++i)
		wc[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' ) {
			putchar(c);
			++wc[counter];
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			counter = 0;
		}
	}
	//printf("word length");
	for (i = 0; i < 10; ++i)
		printf("%d", wc[i]);
}
