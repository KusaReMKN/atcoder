#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	a += b * 7;
	puts(a <= 30 ? "1" : "0");

	return 0;
}
