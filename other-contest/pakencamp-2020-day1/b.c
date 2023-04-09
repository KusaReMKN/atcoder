#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int x;
	int max;

	scanf("%d", &x);
	max = 0;
	while (x != 0) {
		max = MAX(max, x%10);
		x /= 10;
	}
	printf("%d\n", max);

	return 0;
}
