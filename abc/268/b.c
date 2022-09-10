#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[101], t[101];

	gets(s);
	gets(t);
	puts(strstr(t, s) == t ? "Yes" : "No");

	return 0;
}
