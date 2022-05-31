#include <stdio.h>

static long long
f(long long n, long long x)
{
	return n < 0 ? 0 : n/x + 1;
}

int main(void)
{
	long long a, b, x;

	scanf("%lld%lld%lld", &a, &b, &x);
	printf("%lld\n", f(b, x) - f(a-1, x));

	return 0;
}
