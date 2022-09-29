#include <stdio.h>

int
main(void)
{
	char s[16];
	int i, o, x;

	gets(s);
	o = x = 0;
	for (i = 0; s[i]; i++)
		if (s[i] == 'o')
			o++;
		else
			x++;
	o += 15 - i;
	puts(o > x ? "YES" : "NO");

	return 0;
}
