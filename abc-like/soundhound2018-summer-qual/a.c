#include <stdio.h>

int
main(void)
{
	int a, b;
	int c;

	scanf("%d%d", &a, &b);
	c = 'x';
	if (a + b == 15)
		c = '+';
	if (a * b == 15)
		c = '*';
	printf("%c\n", c);

	return 0;
}
