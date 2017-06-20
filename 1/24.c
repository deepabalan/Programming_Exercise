// Write a function reverse(s) that reverses the character string s.
// Use it to write a program that reverses its input a line at a time.


#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void reverses(char s[]);

main()
{
	char line[MAXLINE];

	while (getlines(line, MAXLINE) > 0) {
		reverses(line);
		printf("%s", line);
	}
}
int getlines(char s[], int lim)
{
	int i, c;

	for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void reverses(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		++i;
	--i;
	if (s[i] == '\n')
		--i;
	j = 0;

	while (j < i) {        /* very interesting part (swapping) */
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}
