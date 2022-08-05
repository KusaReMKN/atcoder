#include <stdio.h>

struct query {
	int i, x, r;
};

static int
desca(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

static int
descx(const void *a, const void *b)
{
	struct query *p = a, *q = b;

	return q->x - p->x;
}

static int
asci(const void *a, const void *b)
{
	struct query *p = a, *q = b;

	return p->i - q->i;
}

int
main(void)
{
	int n, q;
	int a[200000];
	struct query x[200000];
	int cur;

	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < q; i++)
		scanf("%d", &x[i].x), x[i].i = i;
	qsort(a, n, sizeof(a[0]), desca);
	qsort(x, q, sizeof(x[0]), descx);
	cur = 0;
	for (int i = 0; i < q; i++) {
		while (cur < n && a[cur] >= x[i].x)
			cur++;
		x[i].r = cur;
	}
	qsort(x, q, sizeof(x[0]), asci);
	for (int i = 0; i < q; i++)
		printf("%d\n", x[i].r);

	return 0;
}
