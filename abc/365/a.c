#include <stdio.h>

int
main(void)
{
	int y;

	scanf("%d", &y);
	if (y % 400 == 0)
		puts("366");
	else if (y % 100 == 0)
		puts("365");
	else if (y % 4 == 0)
		puts("366");
	else
		puts("365");

	return 0;
}
