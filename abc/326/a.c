#include <stdio.h>

int
main(void)
{
	int x, y;
	int diff;

	scanf("%d%d", &x, &y);
	diff = y - x;
	puts(-3 <= diff && diff <= 2 ? "Yes" : "No");

	return 0;
}
