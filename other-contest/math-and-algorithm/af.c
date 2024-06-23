#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	struct { int x, y; } p[2000];
	for (int i = 0; i < n; i++)
		scanf("%d%d", &p[i].x, &p[i].y);

	double d = DBL_MAX;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			d = fmin(d, hypot(p[i].x-p[j].x, p[i].y-p[j].y));
	printf("%.9f\n", d);

	return 0;
}
