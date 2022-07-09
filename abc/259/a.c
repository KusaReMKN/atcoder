#include <stdio.h>

int
main(void)
{
	int n, m, x, t, d;
	int t0, y;

	scanf("%d%d%d%d%d", &n, &m, &x, &t, &d);
	t0 = t - d * x;
	y = m < x ? m : x;
	printf("%d\n", t0 + d * y);

	return 0;
}
