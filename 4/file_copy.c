// program that copies input to output one character at a time


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
