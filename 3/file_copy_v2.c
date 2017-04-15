// A simple program to copy its input to output


#include <stdio.h>
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
