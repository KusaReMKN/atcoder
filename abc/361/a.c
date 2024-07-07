#include <stdio.h>

int
main(void)
{
	int n, k, x;
	scanf("%d%d%d", &n, &k, &x);

	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);

		if (i == k)
			printf(" %d", x);
		printf("%s%d", i > 0 ? " " : "", a);
	}
	if (n == k)
		printf(" %d", x);
	printf("\n");

	return 0;
}
