#include <stdio.h>

int
main(void)
{
	int x, y, l, r, a, b;
	int sum;

	scanf("%d%d%d%d%d%d", &x, &y, &l, &r, &a, &b);
	sum = 0;
	for (int i = a; i < b; i++)
		if (l <= i && i < r)
			sum += x;
		else
			sum += y;
	printf("%d\n", sum);

	return 0;
}
