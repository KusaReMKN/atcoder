#include <stdio.h>

int
main(void)
{
	int n;
	int a, a0;
	long sum;

	scanf("%d", &n);
	scanf("%d", &a0);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += a - a0;
		a0 = a;
	}
	printf("%f\n", (double)sum / (n-1));

	return 0;
}
