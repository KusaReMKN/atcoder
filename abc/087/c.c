#include <stdio.h>

int
main(void)
{
	int n, a[2][100];
	long sum, max;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[0][i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[1][i]);
	max = 0;
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < n; j++)
			sum += j < i ? a[0][j] :
				j > i ? a[1][j] : a[0][j] + a[1][j];
		if (max < sum)
			max = sum;
	}
	printf("%d\n", max);

	return 0;
}
