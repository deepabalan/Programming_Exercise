// Program that counts each letter of input.


#include <stdio.h>
#define IN 1
#define OUT 0
main()
{
	int c, lc=0, state=OUT;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && state == IN)
			++lc;
		else {
			if (state == OUT) {
				state = IN;
			}
		}
	}
	printf("letter count = %d\n", lc);
}
