#include <stdio.h>

int
main(void)
{
	char x, s[51];

	scanf("%c%s", &x, s);
	for (int i = 0; s[i]; i++)
		if (s[i] != x)
			putchar(s[i]);
	putchar('\n');

	return 0;
}
