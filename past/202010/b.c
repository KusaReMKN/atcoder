#include <stdio.h>

int
main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);
	if (y == 0)
		return puts("ERROR"), 0;
	printf("%0.2lf", (int)(x * 100.0) / y / 100.0);

	return 0;
}
