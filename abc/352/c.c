#include <stdio.h>
#include <stdlib.h>

struct k {
	int a, b;
};

static int
compar(const void *a, const void *b)
{
	return (((struct k *)a)->b - ((struct k *)a)->a)
		- (((struct k *)b)->b - ((struct k *)b)->a);
}

int
main(void)
{
	int n;
	scanf("%d", &n);

	struct k p[200000];
	for (int i = 0; i < n; i++)
		scanf("%d%d", &p[i].a, &p[i].b);
	qsort(p, n, sizeof(p[0]), compar);

	long sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i].a;
	sum += -p[n-1].a + p[n-1].b;
	printf("%ld\n", sum);

	return 0;
}
