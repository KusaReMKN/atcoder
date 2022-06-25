#include <stdio.h>
#include <stdlib.h>

struct ab {
	long long a;
	long b;
};

int
asc(const void *a, const void *b)
{
	long long res = ((struct ab *)a)->a - ((struct ab *)b)->a;
	return res == 0 ? 0 : res < 0 ? -1 : 1;
}

int
main(void)
{
	int n, p = 0;
	long long k;
	struct ab ab[200000];

	scanf("%d%lld", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%lld%ld", &ab[i].a, &ab[i].b);
	qsort(ab, n, sizeof(ab[0]), asc);
	for (int i = 0; ab[i].a <= k && i < n; i++)
		k += ab[i].b;
	printf("%lld\n", k);

	return 0;
}
