#include <stdio.h>

int
main(void)
{
	int n, x, y;
	long long r[10], b[10];

	scanf("%d%d%d", &n, &x, &y);
	r[0] = 0;
	b[0] = 1;
	for (int i = 1; i < n; i++) {
		b[i] = r[i-1] + y * b[i-1];
		r[i] = r[i-1] + x * b[i];
	}
	printf("%lld\n", r[n-1]);

	return 0;
}
