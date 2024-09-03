#include <stdio.h>

int
main(void)
{
	int n, m;
	int x[100], a;
	int stuck;;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &a);
		stuck = 0;
		for (int j = 0; j < n; j++)
			if (x[j] == x[a-1]+1) {
				stuck = 1;
				break;
			}
		if (!stuck && ++x[a-1] > 2019)
			x[a-1] = 2019;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", x[i]);

	return 0;
}
