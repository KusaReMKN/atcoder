#include <stdio.h>

int
main(void)
{
	int n, m, a;
	int p[200000] = { 0 };

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &a);
		p[a-1]++;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", m-p[i]);

	return 0;
}
