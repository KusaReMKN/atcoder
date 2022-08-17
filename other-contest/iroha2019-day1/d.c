#include <stdio.h>
#include <stdlib.h>

static int
desc(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n, x, y;
	int a[100];

	scanf("%d%d%d", &n, &x, &y);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), desc);
	for (int i = 0; i < n; i++)
		*(i & 1 ? &y : &x) += a[i];
	puts(x == y ? "Draw" : x < y ? "Aoki" : "Takahashi");

	return 0;
}
