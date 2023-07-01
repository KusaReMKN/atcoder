#include <stdio.h>
#include <stdlib.h>

struct ab {
	long long i, a, b;
};

static int
comper(const void *a, const void *b)
{
	const struct ab *aa = a;
	const struct ab *bb = b;

	const long long ra = aa->a * (bb->a + bb->b);
	const long long rb = bb->a * (aa->a + aa->b);

	return rb < ra ? -1 : ra == rb ? 0 : 1;
}

int
main(void)
{
	int n;
	struct ab ab[200000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld", &ab[i].a, &ab[i].b);
		ab[i].i = i+1;
	}
	qsort(ab, n, sizeof(ab[0]), comper);

	for (int i = 0; i < n; i++)
		printf("%s%lld", i ? " " : "", ab[i].i);
	printf("\n");

	return 0;
}
