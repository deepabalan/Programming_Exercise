// character histogram vertical


#include <stdio.h>
#define MAXHIST 30
#define MAXCHAR 26
main()
{
	int i, j, c, letters[MAXCHAR];
	int ovflow, maxvalue;

	ovflow = maxvalue = 0;

	for (i = 0; i < MAXCHAR; ++i)
		letters[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90)
			++letters[c - 65];
		else if (c >= 97 && c <= 122)
			++letters[c - 97];
	}
	for (i = 0; i < MAXCHAR; ++i) {
		if (letters[i] > maxvalue)
			maxvalue = letters[i];
	}
	for (i = MAXHIST; i > 0; --i) {
		for (j = 0; j < MAXCHAR; ++j) {
			if (letters[j] * MAXHIST / maxvalue >= i)
				printf(" * ");
			else
				printf("   ");
		}
		putchar('\n');
	}
	for (i = 0; i < MAXCHAR; ++i)
		printf("%2c ", 65 + i);
	putchar('\n');
	for (i = 0; i < MAXCHAR; ++i)
		printf("%2d ", letters[i]);
	putchar('\n');
	if (ovflow > 0)
		printf("There are %d letters >= %d\n", ovflow, MAXCHAR);
}
