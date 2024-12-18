#include <stdio.h>
#include <stdlib.h>

struct d {
	int a;
	int i;
	int j;
};

static int
compar_a(const void *a, const void *b)
{
	return ((struct d *)a)->a - ((struct d *)b)->a;
}

static int
compar_i(const void *a, const void *b)
{
	return ((struct d *)a)->i - ((struct d *)b)->i;
}

int
main(void)
{
	int n, c, p;
	struct d d[100000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		d[i].i = i;
		scanf("%d", &d[i].a);
	}

	qsort(d, n, sizeof(d[0]), compar_a);
	p = -1;
	c = 0;
	for (int i = 0; i < n; i++) {
		if (p != d[i].a) {
			c++;
			p = d[i].a;
		}
		d[i].j = c;
	}

	qsort(d, n, sizeof(d[0]), compar_i);
	for (int i = 0; i < n; i++)
		printf("%s%d", i < 1 ? "" : " ", d[i].j);
	printf("\n");

	return 0;
}
