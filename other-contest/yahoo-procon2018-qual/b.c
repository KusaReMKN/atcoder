#include <stdio.h>

int
main(void)
{
	long x, k, n;

	scanf("%ld%ld", &x, &k);
	n = 1;
	for (long i = 0; i < k; i++)
		n *= 10;
	x += n;
	x /= n;
	x *= n;
	printf("%ld\n", x);

	return 0;
}
