#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[11];

	scanf("%s", s);
	if (strcmp(s, "red") == 0)
		puts("SSS");
	else if (strcmp(s, "blue") == 0)
		puts("FFF");
	else if (strcmp(s, "green") == 0)
		puts("MMM");
	else
		puts("Unknown");

	return 0;
}
