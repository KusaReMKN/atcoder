#include <stdio.h>

int
main(void)
{
	int c, n;
	char s[101], t[101];

	scanf("%d%s%s", &n, s, t);
	c = 0;
	for (int i = 0; i < n; i++)
		if (s[i] != t[i])
			c++;
	printf("%d\n", c);

	return 0;
}
