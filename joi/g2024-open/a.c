#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[100001];

	scanf("%*d%s", s);
	puts(strstr(s, "ooo") != NULL ? "Yes" : "No");

	return 0;
}
