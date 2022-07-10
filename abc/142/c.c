#include <stdio.h>
#include <stdlib.h>

struct ai {
	int a, i;
};

int
asc(const void *a, const void *b)
{
	return ((struct ai *)a)->a - ((struct ai *)b)->a;
}

int
main(void)
{
	int n;
	struct ai ai[100000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ai[i].a);
		ai[i].i = i + 1;
	}
	qsort(ai, n, sizeof(ai[0]), asc);
	for (int i = 0; i < n; i++)
		printf("%s%d", i == 0 ? "" : " ", ai[i].i);

	return 0;
}
