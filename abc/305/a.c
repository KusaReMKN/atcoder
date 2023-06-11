#include <stdio.h>

int
main(void)
{
	int n;
	int r;

	scanf("%d", &n);
	r = n % 5;
	printf("%d\n", (n / 5 + (r > 2 ? 1 : 0)) * 5);

	return 0;
}
