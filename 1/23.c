// Write a function reverse(s) that reverses the character string s.
// Use it to write a program that reverses its input a line at a time.

#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void my_reverse(char s[]);

// reverse input lines, a line at a time.
main()
{
	char line[MAXLINE];

	while (my_getline(line, MAXLINE) > 0) {
		my_reverse(line);
		printf("%s", line);
	}
	return 0;
}
int my_getline(char s[], int lim)
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
void my_reverse(char s[])
{
	int i = 0, j;
	char temp;

	j = 0;
	while (s[i] != '\0')
		++i;
	--i;
	if (s[i] == '\n')
		--i;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}
