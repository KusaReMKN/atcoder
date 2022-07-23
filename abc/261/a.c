#include <stdio.h>

#define min(a, b)	((a) < (b) ? (a) : (b))
#define max(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int l1, r1, l2, r2;

	scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
	printf("%d\n", max(0, min(r1, r2) - max(l1, l2)));

	return 0;
}
