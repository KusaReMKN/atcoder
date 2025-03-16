#include <stdio.h>

int
main(void)
{
	double x;

	scanf("%ld", &x);
	if (x >= 38.0)
		puts("1");
	else if (x >= 37.5)
		puts("2");
	else
		puts("3");

	return 0;
}
