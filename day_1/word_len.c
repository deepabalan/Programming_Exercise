// word length


#include <stdio.h>
#define NONBLANK 'a'
main()
{
	int c, current, ic = 0;
	current = NONBLANK;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			++ic;
			current = c;
		}
	
	}
	ic = 0;
	printf("%d\n", ic);
}
