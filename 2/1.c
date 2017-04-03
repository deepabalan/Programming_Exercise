/* write a program to print a histogram of the frequencies of different
 * characters in its input. */


#include <stdio.h>

main()
{
	int c, i;
	int alphabet[26];

	for (i = 0; i < 26; ++i) {
		alphabet[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90) {
			++alphabet[c - 65];
			}
		else if (c >= 97 && c <= 122) {
			++alphabet[c - 97];
		}
	}
	
	printf("histogram");
	for (i = 0; i < 26; ++i) {
		printf("%c %2d", (65 + i), alphabet[i]);
		while (alphabet[i] > 0) {
			printf("\t*");
			--alphabet[i];
		}
		printf("\n");
	}

}
