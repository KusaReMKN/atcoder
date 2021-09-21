#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[16];

	scanf("%s", s);
	if (!strcmp(s, "Hello,World!"))
		puts("AC");
	else
		puts("WA");

	return 0;
}
