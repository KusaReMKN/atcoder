#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		putchar('A' + i);
	putchar('\n');

	return 0;
}
