#include <stdio.h>

int
main(void)
{
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);

		while (x >= 500 && f > 0)
			f--, x -= 500;
		while (x >= 100 && e > 0)
			e--, x -= 100;
		while (x >= 50 && d > 0)
			d--, x -= 50;
		while (x >= 10 && c > 0)
			c--, x -= 10;
		while (x >= 5 && b > 0)
			b--, x -= 5;
		while (x >= 1 && a > 0)
			a--, x -= 1;

		if (x > 0)
			return puts("No"), 0;
	}
	puts("Yes");

	return 0;
}
