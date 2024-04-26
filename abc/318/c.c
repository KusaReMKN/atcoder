#include <stdio.h>
#include <stdlib.h>

int
compar(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n, d, p;
	scanf("%d%d%d", &n, &d, &p);

	int f[200000];
	for (int i = 0; i < n; i++)
		scanf("%d", &f[i]);
	qsort(f, n, sizeof(f[0]), compar);

	int i;
	long sum = 0;
	for (i = 0; i < n; i += d) {
		long cnt = 0;
		for (int j = i; j < i+d && j < n; j++)
			cnt += f[j];
		if (cnt > p)
			sum += p;
		else
			break;
	}
	while (i < n)
		sum += f[i++];

	printf("%ld\n", sum);

	return 0;
}
