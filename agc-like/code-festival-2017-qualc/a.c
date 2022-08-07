#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[6];

	gets(s);
	puts(!!strstr(s, "AC") ? "Yes" : "No");

	return 0;
}
