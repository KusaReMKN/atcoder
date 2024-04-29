#include <stdio.h>

int
main(void)
{
	int n;
	long a, aa[10] = { 0 };
	int p;
	long sum;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a);
		aa[a-1]++;
	}

	sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &p);
		sum += aa[i] * p;
	}
	printf("%ld\n", sum);

	return 0;
}
