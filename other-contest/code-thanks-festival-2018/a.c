#include <stdio.h>

int
main(void)
{
	int t, a, b, c, d;
	int p;

	scanf("%d%d%d%d%d", &t, &a, &b, &c ,&d);
	if (t >= a + c)
		p = b + d;
	else if (t >= c)
		p = d;
	else if (t >= a)
		p = b;
	else
		p = 0;
	printf("%d\n", p);

	return 0;
}
