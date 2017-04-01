#include <stdio.h>
main()
{
	int fahr, celsius;
	int lower, upper, step;
	printf("fahrenheit\tcelsius\n");

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= 300) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
