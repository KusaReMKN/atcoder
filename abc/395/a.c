#include <stdio.h>

int
main(void)
{
	int n, a0, a;

	scanf("%d%d", &n, &a0);
	for (int i = 1; i < n; i++) {
		scanf("%d", &a);
		if (a0 >= a) {
			puts("No");
			return 0;
		}
		a0 = a;
	}
	puts("Yes");

	return 0;
}
