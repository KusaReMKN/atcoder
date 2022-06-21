#include <stdio.h>
#include <stdlib.h>

int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n, v[50];
	double value;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	qsort(v, n, sizeof(v[0]), asc);
	value = v[0];
	for (int i = 1; i < n; i++)
		value = (value + v[i]) * 0.5;
	printf("%.9f\n", value);

	return 0;
}
