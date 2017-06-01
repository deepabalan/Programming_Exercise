// Temperature conversion using for loop


#include <stdio.h>
main()
{
	int fahr;
	float celsius;

	for (fahr = 0; fahr <= 300; fahr += 20) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%d%6.1f\n", fahr, celsius);
	}
}
