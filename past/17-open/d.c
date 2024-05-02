#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	long asum = 0;
	long bsum = b;
	long csum = c;
	for (int i = 0; i < 12; i++) {
		int x;
		scanf("%d", &x);
		asum += a * MAX(x-3, 0);
		bsum += a * MAX(x-50, 0);
		csum += 0;
	}
	printf("%ld\n", MIN(MIN(asum, bsum), csum));

	return 0;
}
