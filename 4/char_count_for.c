// Character counting program using for loop.


#include <stdio.h>
main()
{
	double nc;

	for (nc=0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
