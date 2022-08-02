#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%ld\n", a + 1000000000L / 2 * b);

	return 0;
}
