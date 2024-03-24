#include <stdio.h>

int
main(void)
{
	int a0, a, n;

	scanf("%d%d", &n, &a0);
	for (int i = 1; i < n; i++) {
		scanf("%d", &a);
		printf("%d ", a0 * a);
		a0 = a;
	}
	printf("\n");

	return 0;
}
