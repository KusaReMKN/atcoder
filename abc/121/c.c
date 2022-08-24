#include <stdio.h>

static int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

#define min(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int n, m;
	int ab[100000][2];
	long sum;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &ab[i][0], &ab[i][1]);
	qsort(ab, n, sizeof(ab[0]), asc);
	sum = 0;
	for (int i = 0; i < n && 0 < m; i++) {
		sum += (long)ab[i][0] * min(ab[i][1], m);
		m -= min(ab[i][1], m);
	}
	printf("%ld\n", sum);

	return 0;
}
