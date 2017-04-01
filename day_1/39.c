//my implementation of problem 13 K&R C.


#include <stdio.h>
#define IN 1
#define OUT 0
main()
{
	int i, c, word_arr[10], nc = 0, state = OUT;

	for (i = 1; i <= 10; ++i)
		word_arr[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
				if (nc < 11)
					++word_arr[nc];
		        nc = 0;
		}
		else if (state == OUT) {
			state = IN;
			nc = 1;
		}
		else
			++nc;
	}
	printf("array layout:\n");
	for (i = 1; i <= 10; ++i)
		printf("%d\n", word_arr[i]);
	printf("\n");
}
