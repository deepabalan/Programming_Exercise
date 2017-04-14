// Temperature conversion problem


#include <stdio.h>
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenhiet\tCelsius\n-----------------------\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%.0f%18.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
