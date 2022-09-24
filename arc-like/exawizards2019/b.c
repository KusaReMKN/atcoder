#include <stdio.h>

int
main(void)
{
	char s[101];
	int r, b;

	scanf("%*d%s", s);
	r = b = 0;
	for (int i = 0; s[i]; i++)
		if (s[i] == 'R')
			r++;
		else
			b++;
	puts(r > b ? "Yes" : "No");

	return 0;
}
