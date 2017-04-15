// Character count problem using for loop


#include <stdio.h>
main()
{
	int c, nc;

	for (nc = 0; (c = getchar()) != EOF; ++nc)
		;
	printf("character count = %d\n", nc);
}
