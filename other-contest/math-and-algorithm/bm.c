#include <stdio.h>

int
main(void)
{
	int n;
	int c;

	scanf("%d", &n);
	c = 0;
	while (n >= 10000)
		c++, n -= 10000;
	while (n >= 5000)
		c++, n -= 5000;
	while (n >= 1000)
		c++, n -= 1000;
	printf("%d\n", c);

	return 0;
}
