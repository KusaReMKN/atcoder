#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

static int
compar(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n;
	scanf("%d", &n);

	int l[200];
	for (int i = 0; i < 2*n; i++)
		scanf("%d", &l[i]);
	qsort(l, 2*n, sizeof(l[0]), compar);

	long sum = 0;
	for (int i = 0; i < 2*n; i += 2)
		sum += MIN(l[i+0], l[i+1]);
	printf("%ld\n", sum);

	return 0;
}
