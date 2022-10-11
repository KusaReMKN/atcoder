#include <stdio.h>
#include <stdlib.h>

int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n, m;
	int a[1000], b[1000];
	int c[2000];
	int p;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	p = 0;
	for (int i = 0; i < n; i++)
		if (bsearch(&a[i], b, m, sizeof(b[0]), asc) == NULL)
			c[p++] = a[i];
	for (int i = 0; i < m; i++)
		if (bsearch(&b[i], a, n, sizeof(a[0]), asc) == NULL)
			c[p++] = b[i];
	qsort(c, p, sizeof(c[0]), asc);
	for (int i = 0; i < p; i++)
		printf("%s%d", i == 0 ? "" : " ", c[i]);
	printf("\n");

	return 0;
}
