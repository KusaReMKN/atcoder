#include <stdio.h>

int
main(void)
{
	int n, l;
	char s[100001];
	int t, c;

	scanf("%d%d%s", &n, &l, s);
	t = 1;
	c = 0;
	for (int i = 0; s[i]; i++) {
		s[i] == '+' ? t++ : t--;
		if (t > l)
			c++, t = 1;
	}
	printf("%d\n", c);

	return 0;
}
