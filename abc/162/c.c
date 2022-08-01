#include <stdio.h>

static int
gcd(int n, int m)
{
	if (n == 0)
		return m;
	return gcd(m % n, n);
}

int
main(void)
{
	int k;
	long s;

	scanf("%d", &k);
	s = 0;
	for (int a = 1; a <= k; a++)
		for (int b = 1; b <= k; b++)
			for (int c = 1; c <= k; c++)
				s += gcd(gcd(a, b), c);
	printf("%ld\n", s);

	return 0;
}
