#include <stdio.h>

int
main(void)
{
	long long a, b, k;

	scanf("%lld%lld%lld", &a, &b, &k);
	a -= k;
	if (a < 0) {
		b += a;
		a = 0;
		if (b < 0)
			b = 0;
	}
	printf("%lld %lld\n", a, b);

	return 0;
}
