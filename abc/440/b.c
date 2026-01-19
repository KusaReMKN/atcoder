#include <stdio.h>
#include <stdlib.h>

struct it {
	int i, t;
};

static int
compar(const void *a, const void *b)
{
	struct it *x, *y;

	x = a;
	y = b;

	return x->t - y->t;
}

int
main(void)
{
	int n;
	struct it ti[200];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		ti[i].i = i+1;
		scanf("%d", &ti[i].t);
	}
	qsort(ti, n, sizeof(ti[0]), compar);
	for (int i = 0; i < 3; i++)
		printf("%d ", ti[i].i);
	puts("");

	return 0;
}
