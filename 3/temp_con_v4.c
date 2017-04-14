// Temperature conversion problem using symbolic constants


#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int fahr;
	float celsius;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%d%18.1f\n", fahr, celsius);
	}
}
