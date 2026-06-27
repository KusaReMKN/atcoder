#include <stdio.h>

int
main(void)
{
	int n;
	long r;
	scanf("%d%ld", &n, &r);
	r *= r;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		long x, y, p, q;
		scanf("%ld%ld%ld%ld", &x, &y, &p, &q);
		if ((x-p)*(x-p) + (y-q)*(y-q) <= r)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
