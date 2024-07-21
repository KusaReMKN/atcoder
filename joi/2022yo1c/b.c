#include <stdio.h>

int
main(void)
{
	int s, a, b;
	int p, t;

	scanf("%d%d%d", &s, &a, &b);
	p = 250;
	for (t = a; t < s; t += b)
		p += 100;
	printf("%d\n", p);

	return 0;
}
