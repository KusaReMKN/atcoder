#include <stdio.h>

int
main(void)
{
	int n;
	int a[10][10];
	int dx, dy, x, y;
	long long cur, max;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%1d", &a[i][j]);
	max = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (dx = -1; dx <= 1; dx++)
				for (dy = -1; dy <= 1; dy++) {
					if (dx == 0 && dy == 0)
						continue;
					cur = 0;
					for (int k = 0; k < n; k++) {
						cur *= 10;
						x = (i + k * dx + n) % n;
						y = (j + k * dy + n) % n;
						cur += a[y][x];
					}
					if (cur > max)
						max = cur;
				}
	printf("%lld\n", max);

	return 0;
}
