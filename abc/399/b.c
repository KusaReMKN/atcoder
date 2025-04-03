#include <stdio.h>

struct pir {
	int p, i, r;
};

static int
compar_p(const void *a, const void *b)
{
	return ((struct pir *)b)->p - ((struct pir *)a)->p;
}

static int
compar_i(const void *a, const void *b)
{
	return ((struct pir *)a)->i - ((struct pir *)b)->i;
}

int
main(void)
{
	int c, n, r;
	struct pir pir[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &pir[i].p);
		pir[i].i = i;
	}

	qsort(pir, n, sizeof(pir[0]), compar_p);
	pir[0].r = r = c = 1;
	for (int i = 1; i < n; i++)
		if (pir[i].p == pir[i-1].p) {
			c++;
			pir[i].r = r;
		} else {
			r += c;
			c = 1;
			pir[i].r = r;
		}

	qsort(pir, n, sizeof(pir[0]), compar_i);
	for (int i = 0; i < n; i++)
		printf("%d\n", pir[i].r);

	return 0;
}
