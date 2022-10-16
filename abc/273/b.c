#include <stdio.h>

static long
roundAt(long x, int k)
{
	for (int i = 0; i < k; i++)
		x /= 10L;
	if (x % 10 < 5)
		x -= x % 10;
	else
		x += 10 - x % 10;
	for (int i = 0; i < k; i++)
		x *= 10L;

	return x;
}

int
main(void)
{
	long x;
	int k;

	scanf("%ld%d", &x, &k);
	for (int i = 0; i < k; i++)
		x = roundAt(x, i);
	printf("%ld\n", x);

	return 0;
}
