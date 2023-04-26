#include <stdio.h>

int
main(void)
{
	int l, x;

	scanf("%d%d", &l, &x);
	x %= 2 * l;
	printf("%d\n", x < l ? x : 2*l-x);

	return 0;
}
