#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n, m;
	scanf("%d%d", &n, &m);

	int a[100001] = { 0 };
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), compar);

	int c = 0;
	while (m > a[c])
		m -= a[c++];
	printf("%d\n", c+1);

	return 0;
}
