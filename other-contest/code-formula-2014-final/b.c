#include <stdio.h>

int
main(void)
{
	long n;

	scanf("%ld", &n);
	printf("%ld\n", n/2 + 3*(n%2));

	return 0;
}
