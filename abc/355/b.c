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
	int n, m;
	int a[101], b[101];
	int last;
	int i, j;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), compar);
	for (j = 0; j < m; j++)
		scanf("%d", &b[j]);
	qsort(b, m, sizeof(b[0]), compar);
	last = '*';
	i = j = 0;
	a[n] = b[m] = 999;
	while (a[i] != b[j])
		if (a[i] > b[j]) {
			last = 'b';
			j++;
		} else {
			if (last == 'a')
				return puts("Yes"), 0;
			last = 'a';
			i++;
		}
	puts("No");

	return 0;
}
