#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int
main(void)
{
	int a, b, c, n;

	scanf("%d%d%d%d", &a, &b, &c, &n);
	printf("%d %d %d\n", MAX(0, 1*n-a), MAX(0, 2*n-b), MAX(0, 3*n-c));

	return 0;
}
