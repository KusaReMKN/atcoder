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
	int n;
	int d[100000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &d[i]);
	qsort(d, n, sizeof(d[0]), asc);
	printf("%d\n", d[n/2]-d[n/2-1]);

	return 0;
}
