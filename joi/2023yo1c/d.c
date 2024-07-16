#include <stdio.h>
#include <stdlib.h>

struct k {
	int a;
	int i;
	int k;
};

static int
acompar(const void *a, const void *b)
{
	return ((struct k *)a)->a - ((struct k *)b)->a;
}

static int
icompar(const void *a, const void *b)
{
	return ((struct k *)a)->i - ((struct k *)b)->i;
}

int
main(void)
{
	int n;
	struct k k[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k[i].a);
		k[i].i = i;
	}
	qsort(k, n, sizeof(k[0]), acompar);
	for (int i = 0; i < n; i++) {
		k[i].k = i+1;
		if (i > 0 && k[i-0].a == k[i-1].a)
			k[i-0].k = k[i-1].k;
	}
	qsort(k, n, sizeof(k[0]), icompar);
	for (int i = 0; i < n; i++)
		printf("%d\n", k[i].k);

	return 0;
}
