/* write a program to print a histogram of the frequencies of different
 * characters in its input. */


#include <stdio.h>
#define MAXLEN 10

main()
{
	int c, i;
	int word[MAXLEN];

	for (i = 0; i < MAXLEN; ++i) {
		word[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= "0x41" && c <= "0x5a") {
			++word[c];
			}
		}
	
	printf("histogram");
	for (i = 0; i < MAXLEN; ++i) {
		printf("%d\n", word[i]);
	}

}
