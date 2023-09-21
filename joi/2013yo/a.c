#include <stdio.h>

int
main(void)
{
	int l, a, b, c, d;
	int j, m;

	scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);
	j = a / c + !!(a % c);
	m = b / d + !!(b % d);
	printf("%d\n", l - (j > m ? j : m));

	return 0;
}
