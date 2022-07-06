#include <stdio.h>

int
main(void)
{
	long k;
	int n;
	long a1, a0, a, max;

	scanf("%ld%d", &k, &n);
	scanf("%ld", &a1);
	a0 = a1;
	max = 0;
	for (int i = 1; i < n; i++) {
		scanf("%ld", &a);
		if (a - a0 > max)
			max = a - a0;
		a0 = a;
	}
	if (a1 + k - a0 > max)
		max = a1 + k - a0;
	printf("%ld\n", k - max);

	return 0;
}
