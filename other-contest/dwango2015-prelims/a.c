#include <stdio.h>

int
main(void)
{
	int n, x;

	scanf("%d%d", &n, &x);
	printf("%d\n", x*540 + (n-x)*525);

	return 0;
}
