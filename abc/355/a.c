#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n", a == b ? -1 : 6 - a - b);

	return 0;
}
