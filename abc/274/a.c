#include <stdio.h>
#include <math.h>

int
main(void)
{
	double a, b;

	scanf("%lf%lf", &a, &b);
	b *= 1000.0;
	printf("%.3f\n", round(b/a)/1000.0);

	return 0;
}
