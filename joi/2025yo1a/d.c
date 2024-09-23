#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int n, m;
	int a[100], b[100];
	long sum;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);

	sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			sum += (a[i]+b[j]) * MAX(a[i], b[j]);
	printf("%ld\n", sum);

	return 0;
}
