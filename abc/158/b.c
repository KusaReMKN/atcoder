#include <stdio.h>

int
main(void)
{
	unsigned long long n, a, b;
	unsigned long long res;

	scanf("%llu%llu%llu", &n, &a, &b);
	res = n / (a+b) * a;
	res += n % (a+b) < a ? n % (a+b) : a;
	printf("%llu\n", res);
}
