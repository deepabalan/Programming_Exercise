#include <stdio.h>
main()
{
	int fahr;
	printf("fahrenheit\tcelsius\n");
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}
