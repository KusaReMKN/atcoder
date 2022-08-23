#include <stdio.h>
#include <stdlib.h>

static int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n, k, h[100000];
	int max, t;

	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);
	qsort(h, n, sizeof(h[0]), asc);
	max = 1000000000;
	for (int i = 0; i+k-1 < n; i++)
		if ((t = h[i+k-1] - h[i]) < max)
			max = t;
	printf("%d\n", max);

	return 0;
}
