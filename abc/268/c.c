#include <stdio.h>

#define modN(k, n) ((k)%(n) < 0 ? (k)%(n)+(n) : (k)%(n))

int
main(void)
{
	int n, p[200000];
	int d[200000] = { 0 };
	int max;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		for (int j = -1; j <= 1; j++)
			d[modN(p[i]-i+j, n)]++;
	}
	max = 0;
	for (int i = 0; i < n; i++)
		if (max < d[i])
			max = d[i];
	printf("%d\n", max);

	return 0;
}
