#include <stdio.h>

int
main(void)
{
	int n, a[100000];
	long sum;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i] - 1;
	printf("%ld\n", sum);

	return 0;
}
