#include <stdio.h>

int
main(void)
{
	int n, k;

	scanf("%d%d", &n, &k);
	printf("%d\n", k == 1 ? 0 : n - k);

	return 0;
}
