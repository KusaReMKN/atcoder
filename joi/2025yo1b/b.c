#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int p, q;
	int a, b;

	scanf("%d%d", &p, &q);
	scanf("%d%d", &a, &b);
	printf("%d\n", MIN(q, p)*a + MAX(q-p, 0)*b);

	return 0;
}
