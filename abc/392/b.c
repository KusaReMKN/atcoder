#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int c, n, m, p;
	int a[1000], x[1000];

	(void)scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++)
		(void)scanf("%d", &a[i]);
	qsort(a, m, sizeof(a[0]), compar);

	c = p = 0;
	for (int i = 1; i <= n; i++)
		if (a[p] == i)
			p++;
		else
			x[c++] = i;

	(void)printf("%d\n", c);
	for (int i = 0; i < c; i++)
		(void)printf("%s%d", i > 0 ? " " : "", x[i]);
	(void)printf("\n");

	return 0;
}
