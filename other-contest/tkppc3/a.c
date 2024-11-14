#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int a, b;
	char c1[2], c2[2];

	scanf("%s%d%s%d", c1, &a, c2, &b);
	a /= 15;
	if (c1[0] == 'W')
		a = -a;
	b /= 15;
	if (c2[0] == 'W')
		b = -b;
	printf("%d\n", abs(a-b));

	return 0;
}
