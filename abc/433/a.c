#include <stdio.h>

int
main(void)
{
	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);
	if ((x - y*z) % (z-1) == 0 && x - y*z >= 0)
		puts("Yes");
	else
		puts("No");

	return 0;
}
