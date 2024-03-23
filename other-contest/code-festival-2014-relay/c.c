#include <stdio.h>

int
main(void)
{
	long n, m;

	scanf("%ld%ld", &n, &m);
	printf("%ld\n", n / (m+1));

	return 0;
}
