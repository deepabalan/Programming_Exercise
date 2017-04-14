// program that copies its input to its output


#include <stdio.h>
main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
                c = getchar();
	}
}
