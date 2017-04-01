#include <stdio.h>
main()
{
	int c, char_count;

	char_count = 0;

	while ((c = getchar()) != EOF) {
		++char_count;
	}
	printf("num of chars = %d\n", char_count);
}
