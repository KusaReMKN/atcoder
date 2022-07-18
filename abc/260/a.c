#include <stdio.h>

int
main(void)
{
	int a, b, c;

	a = getchar();
	b = getchar();
	c = getchar();

	if (a == b && b == c)
		return puts("-1"), 0;
	if (a == b)
		putchar(c);
	else if (b == c)
		putchar(a);
	else
		putchar(b);
	putchar('\n');

	return 0;
}
