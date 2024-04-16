#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%*d%d%d", &a, &b);
	puts(a-b & 1 ? "Borys" : "Alice");

	return 0;
}
