#include <stdio.h>
#include <stdlib.h>

int
desc(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int k, n, p1, p2, p3;
	int pp[100000];
	int pq[100000];

	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &p1, &p2, &p3);
		pp[i] = pq[i] = p1 + p2 + p3;
	}
	qsort(pq, n, sizeof(pq[0]), desc);
	for (int i = 0; i < n; i++)
		puts(pq[k-1]-300 <= pp[i] ? "Yes" : "No");

	return 0;
}
