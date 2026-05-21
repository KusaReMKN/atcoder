#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[32];
	int n;

	scanf("%s%d", s, &n);
	s[strlen(s)-n] = '\0';
	puts(s+n);

	return 0;
}
