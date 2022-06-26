#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n, k, q, a[200], l;
	int tmp;

	scanf("%d%d%d", &n, &k, &q);
	for (int i = 0; i < k; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < q; i++) {
		scanf("%d", &l);
		tmp = a[l-1]+1;
		if (a[l-1] == n)
			continue;
		if (bsearch(&tmp, a, k, sizeof(a[0]), asc) == NULL)
			a[l-1]++;
	}
	for (int i = 0; i < k; i++)
		printf("%s%d", i == 0 ? "" : " ", a[i]);
	return 0;
}
