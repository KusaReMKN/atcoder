#include <stdio.h>

int
main(void)
{
	int n;
	int a, b, c;

	scanf("%d", &n);
	c = 0;
	for (a = 1; a < n; a++)
		for (b = 1; a*b < n; b++)
			c++;
	printf("%d\n", c);

	return 0;
}
