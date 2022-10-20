#include <stdio.h>

int
main(void)
{
	int H, W, h, w;

	scanf("%d%d%d%d", &H, &W, &h, &w);
	puts(h >= H && w <= W ? "Yes" : "No");

	return 0;
}
