#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	puts(n & 1 ? "Red" : "Blue");

	return 0;
}
