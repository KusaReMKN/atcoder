#include <stdio.h>

int
main(void)
{
	int x, y, z, s;

	scanf("%d%d%d%d", &x, &y, &z, &s);
	if (x >= s || y >= s || z >= s)
		puts("Yes");
	else
		puts("No");

	return 0;
}
