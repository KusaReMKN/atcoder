#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[11];

	scanf("%s", s);
	puts(strlen(s) % 5 == 0 ? "Yes" : "No");

	return 0;
}
