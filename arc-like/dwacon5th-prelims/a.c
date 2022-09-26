#include <stdio.h>

int
main(void)
{
	int n, a[100];
	int sum, min, ind;

	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]), sum += a[i];
	min = sum;
	ind = 0;
	for (int i = 0; i < n; i++)
		if (abs(sum - n*a[i]) < min)
			min = abs(sum - n*a[i]), ind = i;
	printf("%d\n", ind);

	return 0;
}
