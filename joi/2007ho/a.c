#include <stdio.h>

int
main(void)
{
	int n, k, a;
	long sum[100001];
	long max;

	scanf("%d%d", &n, &k);
	sum[0] = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum[i+1] = sum[i] + a;
	}
	max = sum[k] - sum[0];
	for (int i = 0; i < n-k+1; i++)
		if (max < sum[i+k] - sum[i])
			max = sum[i+k] - sum[i];
	printf("%ld\n", max);

	return 0;
}
