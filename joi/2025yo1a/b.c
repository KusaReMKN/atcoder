#include <stdio.h>

int
main(void)
{
	int x;

	scanf("%d", &x);
	printf("%d\n", x/2 + x%2*3);

	return 0;
}
