#include <stdio.h>
#include <string.h>

int
main(void)
{
	char x[51];
	char *c;

	gets(x);
	if (strcspn(x, "choku") != 0)
		return puts("NO"), 0;
	c = x;
	while ((c = strchr(c, 'c')) != NULL)
		if (*++c != 'h')
			return puts("NO"), 0;
	c = x;
	while ((c = strchr(c, 'h')) != NULL)
		if (*--c != 'c')
			return puts("NO"), 0;
		else
			c += 2;
	puts("YES");

	return 0;
}
