#include <stdio.h>
#include <stdlib.h>

static int
comper(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n;
	int x[500];
	double sum;

	scanf("%d", &n);
	for (int i = 0; i < 5 * n; i++)
		scanf("%d", &x[i]);
	qsort(x, 5*n, sizeof(x[0]), comper);
	sum = 0;
	for (int i = n; i < 4*n; i++)
		sum += x[i];
	printf("%.9lf\n", sum/(3*n));

	return 0;
}
