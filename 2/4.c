// problem no: 13 (horizontal). K&R C.

#include <stdio.h>
main()
{
	int c, i, counter = 0;
	int lens[10];

	for (i = 0; i < 10; ++i)
		lens[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t') {
			++counter;
		}
		else if (counter > 0 && counter < 10) {
			++lens[counter];
			counter = 0;
		}
	}
	printf("word length frequency:\n");
	for (i = 0; i < 10; ++i) {
		printf("%d%4d\t", i, lens[i]);
		while (lens[i] > 0) {
			printf("*");
			--lens[i];
		}
		printf("\n");
	}

}
