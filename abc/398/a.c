#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n-1>>1; i++)
		putchar('-');
	putchar('=');
	if (~n & 1)
		putchar('=');
	for (int i = 0; i < n-1>>1; i++)
		putchar('-');
	putchar('\n');

	return 0;
}
