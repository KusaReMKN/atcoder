#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	long sum = 0;
	for (int i = 0; i < n; i++) {
		long a, t;
		scanf("%ld%ld", &a, &t);
		sum += a * t;
	}
	printf("%ld\n", sum);

	return 0;
}
