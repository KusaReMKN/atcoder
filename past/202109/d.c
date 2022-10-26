#include <stdio.h>

int
main(void)
{
	int x, y;
	int xx, yy;

	scanf("%d%d", &x, &y);
	xx = 0;
	for (int i = 1; i*i <= x; i++)
		if (x % i == 0)
			xx += i*i == x ? 1 : 2;
	yy = 0;
	for (int i = 1; i*i <= y; i++)
		if (y % i == 0)
			yy += i*i == y ? 1 : 2;
	puts(xx == yy ? "Z" : xx < yy ? "Y" : "X");

	return 0;
}
