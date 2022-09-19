#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[101];
	char *p;

	gets(s);
	puts((p = strchr(s, 'C')) && strchr(p+1, 'F') ? "Yes" : "No");

	return 0;
}
