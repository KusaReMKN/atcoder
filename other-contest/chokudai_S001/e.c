#include <stdio.h>
#include <stdlib.h>

struct ai {
	int a, i;
};

static int
asc(const void *a, const void *b)
{
	return ((struct ai *)a)->a - ((struct ai *)b)->a;
}

int
main(void)
{
	int n;
	struct ai ai[100];
	struct ai *p, key;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &ai[i].a), ai[i].i = i+1;
	qsort(ai, n, sizeof(ai[0]), asc);
	key.a = 1;
	p = bsearch(&key, ai, n, sizeof(ai[0]), asc);
	printf("%d\n", p->i);

	return 0;
}
