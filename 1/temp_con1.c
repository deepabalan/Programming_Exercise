#include <stdio.h>
main()
{
	float fahr, celsius;
	int lower, upper, step;

	printf("fahrenheit\tcelsius\n");

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= 300) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t\t%.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
