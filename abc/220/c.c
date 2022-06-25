#include <stdio.h>

int
main(void)
{
	int n;
	long a[100000];
	long long x;
	long long sum = 0;
	long res;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%ld", &a[i]), sum += a[i];
	scanf("%lld", &x);
	res = x / sum * n;
	x %= sum;
	for (int i = 0; x >= 0; i++)
		x -= a[i], res++;
	printf("%ld\n", res);

	return 0;
}
