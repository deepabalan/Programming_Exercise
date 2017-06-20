// remove trailing blanks and tabs and delete entirely blank lines.


#include <stdio.h>
#define MAXLINE 1000

int kr_getline(char line[], int maxline);
int kr_remove(char s[]);

main()
{
	char line[MAXLINE];

	while (kr_getline(line, MAXLINE) > 0)
		if (kr_remove(line) > 0)
			printf("%s", line);
	return 0;
}
int kr_getline(char s[], int lim)
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
int kr_remove(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\n')
		++i;
	--i;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0) {
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}
