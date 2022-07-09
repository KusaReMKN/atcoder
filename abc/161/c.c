#include <stdio.h>

int
main(void)
{
	long long n, k;
	long long a, b;

	scanf("%lld%lld", &n, &k);
	a = n % k;
	b = k - a;
	printf("%lld\n", a < b ? a : b);

	return 0;
}
