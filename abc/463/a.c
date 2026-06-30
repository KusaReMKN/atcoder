#include <stdio.h>

int
main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);
	puts(x * 9 == y * 16 ? "Yes" : "No");

	return 0;
}
