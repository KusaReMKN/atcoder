#include <stdio.h>

int
main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);
	printf("%d\n", (x != 0) + (y != 0));

	return 0;
}
