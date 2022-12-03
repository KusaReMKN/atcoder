#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int x1, y1, x2, y2;

	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("%d\n", abs(x2-x1) + abs(y2-y1) + 1);

	return 0;
}
