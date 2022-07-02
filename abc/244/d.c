#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[16], t[16];
	int ss, tt;

	gets(s);
	gets(t);
	ss = strcmp(s, "R G B") && strcmp(s, "B R G") && strcmp(s, "G B R");
	tt = strcmp(t, "R G B") && strcmp(t, "B R G") && strcmp(t, "G B R");
	puts(ss == tt ? "Yes" : "No");

	return 0;
}
