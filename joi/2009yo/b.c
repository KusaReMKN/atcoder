#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int w[10], k[10];

	for (int i = 0; i < 10; i++)
		scanf("%d", &w[i]);
	for (int i = 0; i < 10; i++)
		scanf("%d", &k[i]);
	qsort(w, 10, sizeof(w[0]), compar);
	qsort(k, 10, sizeof(k[0]), compar);
	printf("%d %d\n", w[0] + w[1] + w[2], k[0] + k[1] + k[2]);

	return 0;
}
