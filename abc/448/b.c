#include <sys/param.h>
#include <stdio.h>

int
main(void)
{
	int n, m;
	scanf("%d%d", &n, &m);

	int c[1000];
	for (int i = 0; i < m; i++)
		scanf("%d", &c[i]);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		sum += MIN(c[a-1], b);
		c[a-1] -= MIN(c[a-1], b);
	}
	printf("%d\n", sum);

	return 0;
}
