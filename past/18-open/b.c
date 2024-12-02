#include <stdio.h>

int
main(void)
{
	int r, p;

	scanf("%d%d", &r, &p);
	r *= 9;
	r += p;
	r /= 10;
	printf("%d\n", r);

	return 0;
}
