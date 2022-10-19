#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	long n, m;
	long r;

	scanf("%ld%ld", &n, &m);
	r = MIN(2*n, m) / 2;
	r += (m - r*2) / 4;
	printf("%ld\n", r);

	return 0;
}
