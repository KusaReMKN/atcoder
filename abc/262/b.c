#include <stdio.h>

int
main(void)
{
	int n, m, u, v;
	int t[100][100] = {{ 0 }};
	int s;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &u, &v);
		t[u-1][v-1] = 1;
		t[v-1][u-1] = 1;
	}
	s = 0;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			for (int k = j+1; k < n; k++)
				if (t[i][j] && t[j][k] && t[k][i])
					s++;
	printf("%d\n", s);

	return 0;
}
