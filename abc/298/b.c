#include <stdio.h>

int
main(void)
{
	int n;
	int a[100][100], b[100][100], c[100][100];
	int eq, tmp;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &b[i][j]);

	for (int i = 0; i < 4; i++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				fprintf(stderr, "%d ", a[i][j]);
			fprintf(stderr, "\n");
		}
		fprintf(stderr, "---\n");
		eq = 1;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] == 1 && b[i][j] == 0) {
					eq = 0;
					goto neq;
				}
neq:
		if (eq == 1)
			return puts("Yes"), 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				c[i][j] = a[n-j-1][i];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				a[i][j] = c[i][j];
	}
	puts("No");

	return 0;
}
