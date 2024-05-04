#include <stdio.h>

int
main(void)
{
	int n, x, y, z;

	scanf("%d%d%d%d", &n, &x, &y, &z);
	puts(x <= z && z <= y || y <= z && z <= x ? "Yes" : "No");

	return 0;
}
