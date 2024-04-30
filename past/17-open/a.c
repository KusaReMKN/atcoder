#include <stdio.h>

int
main(void)
{
	double h, w;
	double bmi;

	scanf("%lf%lf", &h, &w);
	h /= 100;
	bmi = w / (h*h);
	if (bmi < 20)
		puts("A");
	else if (bmi < 25)
		puts("B");
	else
		puts("C");

	return 0;
}
