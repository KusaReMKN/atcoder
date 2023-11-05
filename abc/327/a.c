#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[101];

	scanf("%*d%s", s);
	puts(strstr(s, "ab") != NULL || strstr(s, "ba") != NULL
			? "Yes" : "No");

	return 0;
}
