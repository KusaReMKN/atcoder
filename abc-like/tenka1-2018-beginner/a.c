#include <stdio.h>

int
main(void)
{
	char s[4];

	gets(s);
	if (s[2] == 0)
		puts(s);
	else {
		for (int i = 2; i >= 0; i--)
			putchar(s[i]);
		putchar('\n');
	}

	return 0;
}
