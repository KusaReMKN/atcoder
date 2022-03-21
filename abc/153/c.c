#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
	unsigned long x = *(unsigned long *)a;
	unsigned long y = *(unsigned long *)b;
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	return -1;
}

int main(void)
{
	unsigned long n, k;
	unsigned long *h;
	unsigned long i;
	unsigned long s = 0;

	scanf("%lu %lu", &n, &k);

	h = malloc(n * sizeof(unsigned long));

	for (i = 0; i < n; i++)
	{
		scanf("%lu", h + i);
	}

	qsort(h, n, sizeof(unsigned long), comp);

	if (k > n)
	{
		printf("0\n");
		return 0;
	}

	for (i = 0; i < n - k; i++)
	{
		s += h[i];
	}

	printf("%lu\n", s);

	return 0;
}
