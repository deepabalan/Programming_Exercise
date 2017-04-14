// Temperature conversion problem using for loop


#include <stdio.h>
main()
{
	int fahr;
	float celsius;
	printf("Fahrenheit\tCelsius\n------------------------\n");

	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%d%18.1f\n", fahr, celsius);
	}
}
