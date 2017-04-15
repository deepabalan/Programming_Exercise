// program that counts input lines


#include <stdio.h>
main()
{
	int c, nline;
	nline = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nline;
	}
	printf("line count = %d\n", nline);
}
