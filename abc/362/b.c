#include <stdio.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int x[3], y[3];
	int d[3];

	for (int i = 0; i < 3; i++)
		scanf("%d%d", &x[i], &y[i]);
	for (int i = 0; i < 3; i++)
		d[i] = (x[i]-x[(i+1)%3])*(x[i]-x[(i+1)%3])
			+ (y[i]-y[(i+1)%3])*(y[i]-y[(i+1)%3]);
	qsort(d, 3, sizeof(d[0]), compar);
	puts(d[0] + d[1] == d[2] ? "Yes" : "No");

	return 0;
}
