#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int **p = calloc(n, sizeof(int *));
	for (int i = 0; i < n; i++) {
		int l;
		scanf("%d", &l);

		p[i] = calloc(l, sizeof(int));
		for (int j = 0; j < l; j++)
			scanf("%d", &p[i][j]);
	}

	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", p[x-1][y-1]);

	return 0;
}
