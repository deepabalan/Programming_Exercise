// fahrenhiet-celsius conversion


#include <stdio.h>
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahrenheit celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f%9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
