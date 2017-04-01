// replace nultiple blank with single blank


#include <stdio.h>
main()
{
	int c, count;
	count = 0;

	while ((c = getchar()) != EOF) {
		if (c == 0x20) {
			++count;
			if (count < 2) {
				putchar(c);
			}
		}
		if (c != 0x20) {
			count = 0;
			putchar(c);
		}
	}
}
