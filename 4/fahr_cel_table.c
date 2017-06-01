// program that prints fahrenheit-celsius table


#include <stdio.h>
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahrenhiet celsius\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d%9d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
