#include <stdio.h>

int
main(void)
{
	int n, k;
	int a;
	int p;

	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		if (a == 1)
			p = i;
	}
	printf("%d\n", (n-1 + k-1 - 1) / (k - 1));

	return 0;
}
