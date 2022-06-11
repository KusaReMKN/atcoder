#include <stdio.h>
#include <math.h>

int
main(void)
{
	long long n, k;
	long long a[1000], x[1000], y[1000];
	long long max;

	(void)scanf("%lld%lld", &n, &k);
	for (int i = 0; i < k; i++)
		(void)scanf("%lld", &a[i]);
	for (int i = 0; i < n; i++)
		(void)scanf("%lld%lld", &x[i], &y[i]);
	max = 0;
	for (int i = 0; i < n; i++) {
		long long dist = 99999999999999LL;
		for (int j = 0; j < k; j++) {
			long long dx = x[i] - x[a[j]-1];
			long long dy = y[i] - y[a[j]-1];
			if (dx*dx + dy*dy < dist)
				dist = dx*dx + dy*dy;
		}
		if (max < dist)
			max = dist;
	}
	printf("%.9f\n", sqrt(max));

	return 0;
}
