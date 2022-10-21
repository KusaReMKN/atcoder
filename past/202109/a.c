#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n", MIN(a+b-c, d));

	return 0;
}
