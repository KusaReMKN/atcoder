#include <stdio.h>

int
main(void)
{
	int x;

	scanf("%d", &x);
	printf("%d\n", x % 7 == 2);

	return 0;
}
