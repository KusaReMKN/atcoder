#include <stdio.h>

int
main(void)
{
	int x, y, n;

	scanf("%d%d%d", &x, &y, &n);
	if (3 * x < y)
		printf("%d\n", x * n);
	else
		printf("%d\n", n/3*y+n%3*x);

	return 0;
}
