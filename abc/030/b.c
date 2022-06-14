#include <stdio.h>
#include <math.h>

int
main(void)
{
	int n, m;
	double hour, min;
	double a, b;

	scanf("%d%d", &n, &m);
	min = 6.0 * m;
	hour = 30.0 * (n%12) + 0.5 * m;
	a = fabs(min - hour);
	b = 360.0 - a;
	printf("%f\n", a < b ? a : b);

	return 0;
}
