#include <math.h>
#include <stdio.h>

int
main(void)
{
	int n;
	int x0, y0;
	double sum;

	scanf("%d", &n);
	sum = 0;
	x0 = y0 = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		sum += hypot(x - x0, y - y0);
		x0 = x;
		y0 = y;
	}
	sum += hypot(x0, y0);
	printf("%.9f\n", sum);

	return 0;
}
