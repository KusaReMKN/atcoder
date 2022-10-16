#include <stdio.h>
#include <math.h>

int
main(void)
{
	int xa, ya, xb, yb, xc, yc;

	scanf("%d%d%d%d%d%d", &xa, &ya, &xb, &yb, &xc, &yc);
	xb -= xa;
	xc -= xa;
	yb -= ya;
	yc -= ya;
	printf("%.9f\n", fabs(xb*yc - yb*xc) / 2.0);

	return 0;
}
