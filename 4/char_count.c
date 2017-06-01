// program that counts character.


#include <stdio.h>
main()
{
	long count;

	count = 0;

	while (getchar() != EOF) {
		++count;
	}
	printf("character count = %ld\n", count);
}
