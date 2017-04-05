// function problem


#include <stdio.h>
float temperature(float fahr);

main()
{
	int i;

	for (i = 0; i <= 300; i = i+20)
		printf("%d%9.1f\n", i, temperature(i));
	return 0;
}

float temperature(float fahr)
{
	float celsius;

//	for (i = 0; i <= 300; i = i+20)
	celsius = (5.0/9.0) * (fahr - 32.0);
	return celsius;
}
