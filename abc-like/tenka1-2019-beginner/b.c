#include <stdio.h>

int
main(void)
{
	int k;
	char s[11];

	scanf("%*d%s%d", s, &k);
	for (int i = 0; s[i]; i++)
		if (s[i] != s[k-1])
			s[i] = '*';
	puts(s);

	return 0;
}
