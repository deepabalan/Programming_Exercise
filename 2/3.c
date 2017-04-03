/* letter frequency */

#include <stdio.h>
#define LETTERS 26

main()
{
	int c, i, alph[26];

	for (i = 0; i < 26; ++i)
		alph[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90)
			++alph[c - 65];
		if (c >= 97 && c <= 122)
			++alph[c - 97];
	}

	printf("Alphabet frequency \n");
	for (i = 0; i < 26; ++i) {
		printf("%c %4d\t", 65+i, alph[i]);
		while (alph[i] > 0) {
			printf("*");
			--alph[i];
		}
		printf("\n");
	}
}
