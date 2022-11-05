#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[101];
	char *p;

	gets(s);
	p = strrchr(s, 'a');
	printf("%d\n", p ? p - s + 1 : -1);

	return 0;
}
