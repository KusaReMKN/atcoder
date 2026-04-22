#include <stdio.h>

int
main(void)
{
	int n, m;
	int f, g[100] = { 0 };
	int q1, q2;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &f);
		g[f-1]++;
	}
	q1 = q2 = 1;
	for (int i = 0; i < m; i++) {
		if (g[i] > 1) {
			q1 = 0;
			fprintf(stderr, "q1!%d\n", i);
		}
		if (g[i] < 1) {
			q2 = 0;
			fprintf(stderr, "q2!%d\n", i);
		}
	}
	printf("%s\n%s\n", q1 ? "Yes" : "No", q2 ? "Yes" : "No");

	return 0;
}
