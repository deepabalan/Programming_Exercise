// Program that converts fahrenheit to celsius table


#include <stdio.h>
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahrenheit\tcelsius\n");
	printf("----------------------\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d%18d\n", fahr, celsius);
		fahr += step;
	}
}
