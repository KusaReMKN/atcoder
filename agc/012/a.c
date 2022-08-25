#include <stdio.h>
#include <stdlib.h>

static int
desc(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n, a[300000];
	long sum;

	scanf("%d", &n);
	for (int i = 0; i < 3*n; i++)
		scanf("%d", &a[i]);
	qsort(a, 3*n, sizeof(a[0]), desc);
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[2*i+1];
	printf("%ld\n", sum);

	return 0;
}
