#include <stddef.h>
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
	int n, x;
	int a[100000], *p;

	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	p = bsearch(&x, a, n, sizeof(a[0]), compar);
	printf("%td\n", (ptrdiff_t)(p - a + 1));

	return 0;
}
