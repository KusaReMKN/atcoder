#include <stdio.h>

int
main(void)
{
	int n, x, a;

	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a < x) {
			x = a;
			puts("1");
		} else {
			puts("0");
		}
	}

	return 0;
}
