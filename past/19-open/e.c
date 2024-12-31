#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[1000010] = { 0 }, *p;

	scanf("%*d%s", s);
	for (p = s; *p != '\0'; p++)
		if (strstr(p, "/*") == p && strstr(p+2, "*/") != NULL)
			p = strstr(p+2, "*/") + 1;
		else
			putchar(*p);
	putchar('\n');

	return 0;
}
