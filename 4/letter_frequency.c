// write a program to print a histogram of the frequencies of different
// characters in its input.


#include <stdio.h>
#define CHARACTER 26
main()
{
	int i, c, c_arr[CHARACTER];

	for (i = 0; i < CHARACTER; ++i)
		c_arr[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90) {
			++c_arr[c - 65];
		} else if (c >= 97 && c <= 122) {
			++c_arr[c - 97];
		}
	}
	for (i = 0; i < CHARACTER; ++i) {
		printf("%c- %d\t", 65 + i, c_arr[i]);
		while (c_arr[i] > 0) {
			putchar('*');
			--c_arr[i];
		}
		putchar('\n');
	}
}
