#include <stdio.h>

int
main(void)
{
	char s[51] = "";

	scanf("%*d%*[\no]%s", s);
	puts(s);

	return 0;
}
