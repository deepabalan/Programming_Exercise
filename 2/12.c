// program that prints longest line


#include <stdio.h>
#define MAXLINE 10

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;                     // current line length
	int max;                     // maximum length seen so far
	char line[MAXLINE];          // current input line
	char longest[MAXLINE];       // longest line saved here

	max = 0;
	while ((len = my_getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		if (max > line[MAXLINE]) {
		        printf("limit exceeded");
		}
		else
			printf("%s", longest);
	}
	printf("\n");
	return 0;
}
int my_getline(char s[], int lim)
{
	int i, c;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i;
	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
