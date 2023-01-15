#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	puts(a * 2 == b || a * 2 + 1 == b ? "Yes" : "No");

	return 0;
}
