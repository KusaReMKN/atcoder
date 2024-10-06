#include <stdio.h>
#include <string.h>

int
main(void)
{
	char *p;
	char s[31];

	scanf("%s", s);
	p = strrchr(s, 's');
	if (p != NULL && p[3] == '\0' && strcmp(p, "san") == 0)
		puts("Yes");
	else
		puts("No");

	return 0;
}
