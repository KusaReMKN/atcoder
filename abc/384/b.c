#include <stdio.h>

int
main(void)
{
	int n, r;
	int d, a;

	scanf("%d%d", &n, &r);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &d, &a);
		if (d == 1 && 1600 <= r && r <= 2799)
			r += a;
		if (d == 2 && 1200 <= r && r <= 2399)
			r += a;
	}
	printf("%d\n", r);

	return 0;
}
