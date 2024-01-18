#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	putchar('1');
	for (int i = 1; i < n; i++)
		putchar('0');
	putchar('\n');

	return 0;
}
