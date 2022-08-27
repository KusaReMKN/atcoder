#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[100];

	gets(s);
	printf("%c\n", s[strlen(s)/2]);

	return 0;
}
