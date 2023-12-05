#include <stdio.h>

int
main(void)
{
	int h;

	scanf("%*d%d", &h);
	puts(h >= 2800 ? "o" : "x");

	return 0;
}
