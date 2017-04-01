// word length program


#include <stdio.h>
#define IN         1
#define OUT        0
#define MAXWORDLEN 15
main()
{
	int c, i, nc, state;
	int word[MAXWORDLEN];
	nc = 0;
	state = OUT;

	for (i = 0; i < MAXWORDLEN; ++i)
		word[i] = 0;

	while ((c = getchar()) != EOF) {
}
