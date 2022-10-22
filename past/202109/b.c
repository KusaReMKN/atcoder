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
	int n, m;
	int a[1000], b[1000];
	int first;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	qsort(a, n, sizeof(a[0]), asc);
	qsort(b, m, sizeof(b[0]), asc);
	first = 1;
	for (int i = 0; i < n; i++)
		if (bsearch(&a[i], b, m, sizeof(b[0]), asc) != NULL)
			printf("%s%d", first ? "" : " ", a[i]), first = 0;
	printf("\n");

	return 0;
}
