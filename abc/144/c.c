#include <stdio.h>
#include <math.h>

int
main(void)
{
	long n;

	scanf("%ld", &n);
	for (long i = sqrt(n)+1; i > 0; i--)
		if (n % i == 0)
			return printf("%ld\n", n/i + i - 2), 0;

	return -1;
}
