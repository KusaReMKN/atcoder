#include <stdio.h>

int
isin(long cx, long cy, long r, int x, int y)
{
	return (x-cx)*(x-cx) + (y-cy)*(y-cy) <= r*r;
}

int
main(void)
{
	int x, y, r, n;

	scanf("%d%d%d%d", &x, &y, &r, &n);
	for (int i = -n; i <= +n; i++) {
		for (int j = -n; j <= +n; j++) {
			if (j != -n)
				putchar(' ');
			putchar(isin(x, y, r, i, j) ? '#' : '.');
		}
		putchar('\n');
	}

	return 0;
}
