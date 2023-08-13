#include <stdio.h>
#include <tgmath.h>

int
main(void)
{
	double n, va, vb, l;

	scanf("%lf%lf%lf%lf", &n, &va, &vb, &l);
	l *= pow(vb / va, n);
	printf("%.9f\n", l);

	return 0;
}
