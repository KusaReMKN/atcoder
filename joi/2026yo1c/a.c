#include <stdio.h>

int
main(void)
{
	int a, b;

	scnaf("%d%d", &a, &b);
	printf("%d\n", a + 300 * b);

	return 0;
}
