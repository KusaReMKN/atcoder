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
	int n, x[200000];
	int v[200000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]), v[i] = x[i];
	qsort(v, n, sizeof(v[0]), asc);
	for (int i = 0; i < n; i++)
		if ((int *)bsearch(&x[i], v, n, sizeof(v[0]), asc) - v < n / 2)
			printf("%d\n", v[n/2]);
		else
			printf("%d\n", v[n/2-1]);

	return 0;
}
