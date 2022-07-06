#include <stdio.h>

int
main(void)
{
	int n, x[100];
	long minp;
	int min, max;

	scanf("%d", &n);
	min = 999;
	max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		if (max < x[i])
			max = x[i];
		if (x[i] < min)
			min = x[i];
	}
	minp = 9999999L;
	for (int i = min; i <= max; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum += (x[j] - i) * (x[j] - i);
		if (sum < minp)
			minp = sum;
	}
	printf("%ld\n", minp);

	return 0;
}
