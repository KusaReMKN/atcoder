#include <stdio.h>

int
main(void)
{
	char s[101];

	gets(s);
	printf("%c\n", s[0]);

	return 0;
}
