#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int a, b, c, d, p;
	int x, y;

	scanf("%d%d%d%d%d", &a, &b,&c, &d, &p);
	x = a * p;
	y = b + MAX(0, p-c) * d;
	printf("%d\n", MIN(x, y));

	return 0;
}
