#include <stdio.h>

static int
f(int x)
{
	return x == 0 ? 1 : x * f(x-1);
}

int
main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d\n", f(n));

	return 0;
}
