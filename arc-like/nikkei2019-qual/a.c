#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))
#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int n, a, b;

	scanf("%d%d%d", &n, &a, &b);
	printf("%d %d\n", MIN(a, b), MAX(0, a+b - n));

	return 0;
}
