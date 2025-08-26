#include <stdio.h>

int
main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);
	printf("%d\n", (x-1+y) % 12 + 1);

	return 0;
}
