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
	int n;
	scanf("%d", &n);

	int a[500001];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), compar);
	a[n] = 0;

	long cnt = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		while (a[i] < 2*a[j])
			j++;
		cnt += n-j;
	}
	printf("%ld\n", cnt);

	return 0;
}
