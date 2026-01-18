#include <stdio.h>

int
main(void)
{
	int p, q, x, y;

	scanf("%d%d%d%d", &p, &q, &x, &y);
	if (p <= x && x < p+100 && q <= y && y < q+100)
		puts("Yes");
	else
		puts("No");

	return 0;
}
