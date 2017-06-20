// Write a program to remove trailing blanks and tabs from each line of
// input, and to delete entirely blank lines.


#include <stdio.h>
#define MAXLINE 1000           // maximum input line size

int my_getline(char line[], int maxline);
int my_remove(char s[]);

// removing trailing blanks and tabs, and delete blank lines
main()
{
	char line[MAXLINE];    // current input line

	while (my_getline(line, MAXLINE) > 0)
		if (my_remove(line) > 0)
			printf("%s", line);
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

// removing trailing blanks and tabs from character string s
int my_remove (char s[])
{
	int i;

	i = 0;
	while (s[i] != '\n')    // find newline character
		++i;
	--i;                    // back off from '\n'

	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0) {           // is it a nonblank line?
		++i;
		s[i] = '\n';    // put newline character back
		++i;
		s[i] = '\0';    // terminate the string
	}
	return i;
}

