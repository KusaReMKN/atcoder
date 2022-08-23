#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	a = abs(a);
	b = abs(b);
	puts(a == b ? "Draw" : a < b ? "Ant" : "Bug");

	return 0;
}
