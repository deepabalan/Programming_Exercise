// Simple program in function


#include <stdio.h>
int power(int m, int n);

main()
{
	int i;
	
	for (i = 0; i <= 10; ++i) {
		printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}

int power(int base, int n)
{
	int result = 1, i;
	for (i = 0; i <= n; ++i) {
		result = result * base;
  	}
	return result;
}
