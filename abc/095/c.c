#include <stdio.h>

#define min(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int a, b, c, x, y;
	long sum;

	scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
	sum = min(x, y) * min(a+b, 2*c);
	sum += (x - min(x, y)) * min(a, 2*c);
	sum += (y - min(x, y)) * min(b, 2*c);
	printf("%ld\n", sum);

	return 0;
}
