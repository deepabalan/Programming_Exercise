// horizontal histogram

#include <stdio.h>
#define MAXWORD 11
#define IN 1
#define OUT 0

main()
{
	int c, nc = 0, wl[MAXWORD];
	int len = 0, ovflow = 0, i, state = OUT;

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			if (nc > 0) {
				if (nc < MAXWORD)
					++wl[nc];
				else
					++ovflow;
			}
			nc = 0;
		} else if (state == OUT) {
			state = IN;
			nc = 1;
		} else
			++nc;
	}
	for (i = 1; i < MAXWORD; ++i) {
		printf("%5d- %5d: ", i, wl[i]);
		if (wl[i] > 0) {
			len = wl[i];
			while (len > 0) {
				putchar('*');
				--len;
			}
			putchar('\n');
		}
	}
}
