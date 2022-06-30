#include <stdio.h>
#include <math.h>

unsigned long long
nn(unsigned long long n)
{
	int k = (int)ceil(log10(n+1));
	unsigned long long t = n;
	for (int i = 0; i < k; i++)
		n *= 10;
	return n + t;
}

int
main(void)
{
	unsigned long long i, n;

	scanf("%llu", &n);
	for (i = 1; nn(i) <= n; i++);
	printf("%llu\n", i-1);

	return 0;
}
