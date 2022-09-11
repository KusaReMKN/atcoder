#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))
#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	long a, b, c, d;

	scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
	puts(MAX(a, c) <= MIN(b, d) ? "Yes" : "No");

	return 0;
}
