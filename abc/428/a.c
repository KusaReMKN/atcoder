#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int s, a, b, x;

	scanf("%d%d%d%d", &s, &a, &b, &x);
	printf("%d\n", s * (x/(a+b)*a + MIN(x%(a+b), a)));

	return 0;
}
