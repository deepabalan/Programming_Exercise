// count occurrence of digits, whitespace and others.


#include <stdio.h>
main()
{
	int c, nwhite, nother, i;
	int ndigit[10];
	nwhite = nother = 0;

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		if (c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else
			++nother;
	}
	printf("digits = ");
	for (i = 0; i < 10; ++i)
		printf("%d", ndigit[i]);
	printf(", white space = %d, others = %d\n", nwhite, nother);
}
