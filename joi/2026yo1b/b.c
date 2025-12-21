#include <stdio.h>

int
main(void)
{
	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);
	puts(x <= z || y <= z ? "1" : "0");

	return 0;
}
