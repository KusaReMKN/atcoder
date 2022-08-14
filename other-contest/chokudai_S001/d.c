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
	int n;
	int a[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), asc);
	for (int i = 0; i < n; i++)
		printf("%s%d", i ? " " : "", a[i]);
	printf("\n");

	return 0;
}
