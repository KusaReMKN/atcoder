#include <stdio.h>

int
main(void)
{
	long long n;
	long long t, s;

	scanf("%lld", &n);
	s = 0;
	t = 999;
	while (1) {
		n -= t;
		if (n <= 0)
			break;
		s += n;
		t *= 1000;
	}
	printf("%lld\n", s);

	return 0;
}
