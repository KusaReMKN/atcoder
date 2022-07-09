#include <stdio.h>
#include <math.h>

int
main(void)
{
	double a, b, d;

	scanf("%lf%lf%lf", &a, &b, &d);
	d *= 3.14159265358979 / 180;
	printf("%.9f %.9f\n",
			a * cos(d) - b * sin(d),
			a * sin(d) + b * cos(d));
	return 0;
}
