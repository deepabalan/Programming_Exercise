// print word length.


#include <stdio.h>
//#define MAXLENGTH 10
#define IN 1
#define OUT 0

main()
{
	int c, nc = 0;
	int i, state = OUT;
	int len[10];

	for (i = 1; i <= 10; ++i) {
		len[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0) {
				if (nc < 10) {
					++len[nc];
				}
			}
			nc = 0;
		}
		else if (state == OUT) {
			state = IN;
			nc = 1;
		}
		else {
			++nc;
		}
	}
	for (i = 1; i < 10; ++i)
		printf("%d%4d\n", i, len[i]);
}
