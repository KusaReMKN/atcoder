#include <stdio.h>

int main(void)
{
	int n, m;
	int b[2001];

	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		b[i] = i;
	for (int j = 0; j < m; j++) {
		int x, y;
		scanf("%d%d", &x, &y);
		b[x] = y;
	}
	for (int i = 1; i <= n; i++)
		printf("%d\n", b[i]);

	return 0;
}
