#include <stdio.h>

int
main(void)
{
	int r;

	scanf("%d", &r);
	r %= 100;
	printf("%d", 100-r);

	return 0;
}
