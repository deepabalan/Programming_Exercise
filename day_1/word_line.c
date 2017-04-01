#include <stdio.h>

/* prints its input one word per line*/

main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		else if (c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
	}
        printf("\n");
}
