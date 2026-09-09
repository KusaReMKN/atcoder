#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int c[n+2][n+2];
	for (int i = 1; i <= n-1; i++)
		for (int j = i+1; j <= n; j++)
			scanf("%d", &c[i][j]);

	int yes = 0;
	for (int i = 1; i <= n; i++)
		for (int j = i+1; j <= n; j++)
			for (int k = i+1; k < j; k++)
				if (c[i][j] > c[i][k]+c[k][j]) {
					fprintf(stderr, "%d-%d: %d, %d-%d-%d: %d\n",
							i, j, c[i][j], i, k, j, c[i][k]+c[k][j]);
					yes = 1;
					goto quit;
				}
quit:
	puts(yes ? "Yes" : "No");

	return 0;
}
