#include <stdio.h>

int
main(void)
{
	long n;

	scanf("%ld", &n);
	n %= 998244353;
	while (n < 0)
		n += 998244353;
	printf("%ld\n", n);

	return 0;
}
