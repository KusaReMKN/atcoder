#include <stdio.h>
#include <stdlib.h>

struct abig {
	int a, b, i;
	long g;
};

static int
compar(const void *a, const void *b)
{
	const struct abig *x = a, *y = b;

	if (x->a != y->a)
		return y->a - x->a;
	if (x->b != y->b)
		return x->b - y->b;
	return x->i - y->i;
}

static int
compari(const void *a, const void *b)
{
	const struct abig *x = a, *y = b;

	return x->i - y->i;
}

int
main(void)
{
	struct abig v[1000];
	int n, t;

	scanf("%d%d", &n, &t);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &v[i].a, &v[i].b);
		v[i].i = i;
	}

	qsort(v, n, sizeof(v[0]), compar);
	for (int i = 0; i < n; i++)
		v[i].g = (long)t * (v[0].a - v[i].a) + (v[i].b - v[0].b);

	qsort(v, n, sizeof(v[0]), compari);
	for (int i = 0; i < n; i++)
		printf("%ld\n", v[i].g);

	return 0;
}
