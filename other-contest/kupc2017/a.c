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
	int n, k;
	int a[50], i;
	int sum;

	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), desc);
	sum = 0;
	for (i = 0; i < n && sum < k; i++)
		sum += a[i];
	printf("%d\n", sum >= k ? i : -1);

	return 0;
}
