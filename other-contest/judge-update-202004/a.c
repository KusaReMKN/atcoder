#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int s, l, r;

	scanf("%d%d%d", &s, &l, &r);
	printf("%d\n", MIN(MAX(l, s), r));

	return 0;
}
