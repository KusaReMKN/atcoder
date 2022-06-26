#include <stdio.h>

int
main(void)
{
	int n, x;

	scanf("%d%d", &n, &x);
	x = (x-1) / n;
	printf("%c\n", 'A' + x);

	return 0;
}
