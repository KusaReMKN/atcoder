#include <stdio.h>

int
main(void)
{
	long n;
	scanf("%ld", &n);

	long cnt = 0;
	cnt += n / 3;
	cnt += n / 5;
	cnt += n / 7;
	cnt -= n / (3 * 5);
	cnt -= n / (3 * 7);
	cnt -= n / (5 * 7);
	cnt += n / (3 * 5 * 7);
	printf("%ld\n", cnt);

	return 0;
}
