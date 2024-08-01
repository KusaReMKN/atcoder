#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	long n, x, y;
	long a[200000], b[200000];
	int ca, cb;
	long sa, sb;

	scanf("%ld%ld%ld", &n, &x, &y);
	for (int i = 0; i < n; i++)
		scanf("%ld", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%ld", &b[i]);
	qsort(a, n, sizeof(a[0]), compar);
	qsort(b, n, sizeof(b[0]), compar);

	sa = sb = 0;
	for (int i = 0; i < n && sa <= x; i++)
		sa += a[i], ca = i;
	for (int i = 0; i < n && sb <= y; i++)
		sb += b[i], cb = i;
	printf("%d\n", ca < cb ? ca + 1 : cb + 1);

	return 0;
}
