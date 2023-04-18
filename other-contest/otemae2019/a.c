#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	puts(a < b ? "0" : "1");

	return 0;
}
