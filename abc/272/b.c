#include <stdio.h>

int
main(void)
{
	int n, m;
	int k, x;
	int v[100][100] = {{ 0 }};
	int ok, p;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			scanf("%d", &x);
			v[i][x-1] = 1;
		}
	}
	ok = 1;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++) {
			p = 0;
			for (int k = 0; k < m; k++)
				if (v[k][i] && v[k][j]) {
					p = 1;
					break;
				}
			if (!p) {
				ok = 0;
				goto quit;
			}
		}
quit:
	puts(ok ? "Yes" : "No");

	return 0;
}
