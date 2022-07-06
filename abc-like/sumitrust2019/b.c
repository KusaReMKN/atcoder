#include <stdio.h>
#include <math.h>

int
main(void)
{
	unsigned n;
	double x;

	scanf("%u", &n);
	x = floor(n / 1.1);
	for (x; floor(x * 1.08) < n; x++)
		;
	if (floor(x * 1.08) == n)
		printf("%u\n", (unsigned)x);
	else
		puts(":(");

	return 0;
}
