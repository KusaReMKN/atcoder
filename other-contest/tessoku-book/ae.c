https://atcoder.jp/home#include <stdio.h>

int
main(void)
{
	long n;

	scanf("%ld", &n);
	printf("%ld\n", n/3 + n/5 - n/15);

	return 0;
}
