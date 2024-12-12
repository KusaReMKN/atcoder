#include <stdio.h>

int
main(void)
{
	int a, b, c, i, j, m, n;
	long sa, sc;

	scanf("%d%d%d", &n, &m, &b);
	sa = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		sa += a;
	}
	sc = 0;
	for (j = 0; j < m; j++) {
		scanf("%d", &c);
		sc += c;
	}
	printf("%ld\n", (long)b*m*n + m*sa + n*sc);

	return 0;
}
