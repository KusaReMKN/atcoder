#include <stdio.h>
#include <stdlib.h>

struct ai {
	int a;
	int i;
};

static int
compar(const void *a,const void *b)
{
	return ((struct ai *)b)->a - ((struct ai *)a)->a;
}

int
main(void)
{
	int n;
	struct ai ai[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &ai[i].a), ai[i].i = i;
	qsort(ai, n, sizeof(ai[0]), compar);
	printf("%d\n", ai[1].i + 1);

	return 0;
}
