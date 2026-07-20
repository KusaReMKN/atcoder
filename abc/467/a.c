#include <stdio.h>

int
main(void)
{
	int h, w;

	scanf("%d%d", &h, &w);
	puts(25 * h * h <= w * 10000 ? "Yes" : "No");

	return 0;
}
