/* Simple program using functions. */


#include <stdio.h>
int power(int m, int n);

main()
{
	int base, i;
	base = 2;

	for (i = 0; i < 10; ++i)
		printf("%d\n", power(base, i));
	return 0;
}

power(int base, int n)
{
	int i, result = 1;

	for (i = 0; i <= n; ++i)
		result = base * result;
	return result;
}
