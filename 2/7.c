// simple function


#include <stdio.h>
int power(int m, int n);

main()
{
	int i;
	
	printf("i\t2**i\t-3**i\n----------------------\n");
	for (i = 0; i <= 10; ++i) {
		printf("%d %6d %9d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}
int power(int base, int n)
{
	int i, result;

	result = 1;
	for (i = 0; i <= n; ++i) {
		result = result * base;
	}
        return result;	
}
