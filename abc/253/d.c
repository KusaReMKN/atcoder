#include <stdio.h>

static inline unsigned long long
gcd(unsigned long long a, unsigned long long b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

static inline unsigned long long
lcm(unsigned long long a, unsigned long long b)
{
	register unsigned long long d = gcd(a, b);
	return a / d * b;
}

static inline unsigned long long
sum(unsigned long long a)
{
	return a * (a+1) / 2;
}

int
main()
{
	unsigned long long n, a, b;
	register unsigned long long m;

	scanf("%llu%llu%llu", &n, &a, &b);
	m = lcm(a, b);
	printf("%llu\n", sum(n) - a*sum(n/a) - b*sum(n/b) + m*sum(n/m));
}
