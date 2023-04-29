#include <stdio.h>

int
main(void)
{
	int n, a, b;

	scanf("%d%d%d", &n, &a, &b);
	for (int i = 1; i <= n; i++) {
		int c;

		scanf("%d", &c);
		if (c == a + b)
			return printf("%d", i), 0;
	}

	return -1;
}
