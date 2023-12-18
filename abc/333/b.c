#include <stdio.h>
#include <string.h>

#define U ("ABCDEAEDCBA")

int
main(void)
{
	char s[3], t[3];

	scanf("%s%s", s, t);
	puts(!!strstr(U, s) == !!strstr(U, t) ? "Yes" : "No");

	return 0;
}
