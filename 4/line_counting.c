// Program that counts number of lines in input.


#include <stdio.h>
main()
{
	int nl=0, c;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
	}
	printf("newline count = %d\n", nl);
}
