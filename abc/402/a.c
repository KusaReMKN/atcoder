#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[101];

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
		if (isupper(s[i]))
			putchar(s[i]);
	putchar('\n');

	return 0;
}
