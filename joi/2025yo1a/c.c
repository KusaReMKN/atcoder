#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[101];
	char *p;

	scanf("%*d%s", s);
	for (p = s; (p = strchr(p, 'J')) != NULL; )
		*p = '#';
	for (p = s; (p = strchr(p, 'I')) != NULL; )
		*p = 'J';
	for (p = s; (p = strchr(p, 'O')) != NULL; )
		*p = 'I';
	for (p = s; (p = strchr(p, '#')) != NULL; )
		*p = 'O';
	puts(s);

	return 0;
}
