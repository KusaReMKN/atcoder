#include <stdio.h>

int
main(void)
{
	long n, k;
	int one[16] = { 0 }, p;

	scanf("%ld", &n);
	p = 0;
	for (int i = 0; n; n >>= 1, i++) {
		if (n & 1)
			one[p++] = i+1;
	}
	one[p] = 0;
	for (int i = 0; i < 1L << p; i++) {
		k = 0;
		for (int j = 0; one[j]; j++) {
			if (i & 1L << j)
				k |= 1L << one[j]-1;
		}
		printf("%ld\n", k);
	}

	return 0;
}
