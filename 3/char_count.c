// A program that prints the character count of the given inputs.


#include <stdio.h>
main()
{
	int c, count;
	count = 0;

	while ((c = getchar()) != EOF) {
		++count;
	}
	printf("number of characters = %d\n", count);
}
