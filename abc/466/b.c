#include <stdio.h>

int
main(void)
{
	int n, m;
	int c, s;
	int v[100] = { 0 };

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &c, &s);
		if (v[c-1] < s)
			v[c-1] = s;
	}
	for (int i = 0; i < m; i++)
		printf("%d ", v[i] > 0 ? v[i] : -1);
	printf("\n");

	return 0;
}
