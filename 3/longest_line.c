// program to print longest line.


#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;                 // current input line
	int max;                 // maximum length seen so far
	char line[MAXLINE];      // current input line
	char longest[MAXLINE];   // longest line saved here

	max = 0;
	while ((len = my_getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s\n", longest);
	return 0;
}

int my_getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && )
}
