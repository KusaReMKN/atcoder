#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%ld\n", a & b & c & 1 ?
			MIN((long)a*b, MIN((long)b*c, (long)c*a)) : 0);

	return 0;
}
