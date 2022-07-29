#include <stdio.h>
#include <math.h>

#define PI_180 0.01745329251994329576

int
main(void)
{
	double a, b, h, m;
	double hth, mth;
	double hx, hy, mx, my;

	scanf("%lf%lf%lf%lf", &a, &b, &h, &m);
	mth = 6.0 * m;
	hth = 30.0 * h + m / 2.0;
	hx = a * cos(hth * PI_180);
	hy = a * sin(hth * PI_180);
	mx = b * cos(mth * PI_180);
	my = b * sin(mth * PI_180);
	printf("%.9f\n", hypot(mx-hx, my-hy));

	return 0;
}
