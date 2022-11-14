#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n", a == b ? 0 : a < b ? -1 : 1);

	return 0;
}
