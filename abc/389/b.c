#include <stdio.h>

int
main(void)
{
	long x, y;
	int i;

	scanf("%ld", &x);
	y = 1;
	for (i = 2; y != x; i++)
		y *= i;
	printf("%d\n", i-1);

	return 0;
}
