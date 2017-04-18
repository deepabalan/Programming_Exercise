/* SImple program to find power of number. */



#include <stdio.h>
int power(int m, int n);

main()
{
	int base, i;
	for (i = 0; i < 10; ++i) {
		printf("%d\n", power(2, i));
	}
	// return 0;
}

int power(int base, int n)
{
	int result, i;
	result = 1;
	for (i = 0; i <= n; ++i) {
		result = base * result;
	}
	return result;
}
