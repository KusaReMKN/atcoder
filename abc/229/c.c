#include <stdio.h>
#include <stdlib.h>

struct ab {
	int a, b;
};

int
desc(const void *a, const void *b)
{
	return ((struct ab *)b)->a - ((struct ab *)a)->a;
}

#define min(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int n, w;
	struct ab ab[300000];
	long sum;

	scanf("%d%d", &n, &w);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &ab[i].a, &ab[i].b);
	qsort(ab, n, sizeof(ab[0]), desc);
	sum = 0;
	for (int i = 0; i < n && w > 0; i++) {
		sum += min(w, ab[i].b) * (long)ab[i].a;
		w -= min(w, ab[i].b);
	}
	printf("%ld\n", sum);

	return 0;
}
