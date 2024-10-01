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
	int n;
	int a[500000], b[500000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), compar);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);
	qsort(b, n, sizeof(b[0]), compar);
	printf("%d\n", a[0] + b[0]);

	return 0;
}
