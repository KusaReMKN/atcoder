#include <stdio.h>

int
main(void)
{
	int y;

	scanf("%d", &y);
	for (y; y % 4 != 2; y++);
	printf("%d\n", y);

	return 0;
}
