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
	int n, d;
	int a[200];
	int i;

	scanf("%d%d", &n, &d);
	for (i = 0; i < 2*n; i++)
		scanf("%d", &a[i]);
	qsort(a, 2*n, sizeof(a[0]), compar);
	for (i = 0; i < 2*n; i += 2)
		if (a[i+1] - a[i+0] > d) {
			puts("No");
			return 0;
		}
	puts("Yes");

	return 0;
}
