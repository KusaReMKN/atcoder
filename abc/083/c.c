#include <stdio.h>

int
main(void)
{
	long x, y;
	long a, cnt;

	scanf("%ld%ld", &x, &y);
	cnt = 0;
	a = x;
	while (a <= y)
		cnt++, a <<= 1;
	printf("%d\n", cnt);

	return 0;
}
