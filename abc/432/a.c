#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int v[3];

	scanf("%d%d%d", &v[0], &v[1], &v[2]);
	qsort(v, 3, sizeof(v[0]), compar);
	printf("%d%d%d\n", v[2], v[1], v[0]);

	return 0;
}
