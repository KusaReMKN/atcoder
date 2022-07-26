#include <stdio.h>

int
main(void)
{
	int n;
	char s[100001];
	int c, r;

	scanf("%d%s", &n, s);
	c = s[0];
	r = 1;
	for (int i = 1; i < n; i++)
		if (c != s[i])
			r++, c = s[i];
	printf("%d\n", r);

	return 0;
}
