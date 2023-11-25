#include <stdio.h>

int
main(void)
{
	int a, b;
	int c, d;

	scanf("%d%d", &a, &b);
	c = a + b;
	d = 1;
	while (c /= 10)
		d++;
	printf("%d\n", d);

	return 0;
}
