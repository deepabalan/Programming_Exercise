// Program which shows usage of symbolic constants


#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr+=STEP)
		printf("%3d%10.2f\n", fahr, ((5.0/9.0) * (fahr - 32.0)));
}
