#include <stdio.h>

int
main(void)
{
	int h, w;
	char g[501][501];
	char f[501][501] = { { 0 } };
	int x, y, r;

	scanf("%d%d", &h, &w);
	for (int i = 0; i < h; i++)
		scanf("%s", g[i]);
	x = y = r = 0;
	while (r == 0) {
		f[y][x] = 1;
		switch (g[y][x]) {
		case 'U':
			if (y == 0)
				r = 1;
			else
				y--;
			break;
		case 'D':
			if (y == h-1)
				r = 1;
			else
				y++;
			break;
		case 'L':
			if (x == 0)
				r = 1;
			else
				x--;
			break;
		case 'R':
			if (x == w-1)
				r = 1;
			else
				x++;
			break;
		}
		if (r == 0 && f[y][x])
			r = -1;
	}
	if (r == -1)
		puts("-1");
	else
		printf("%d %d\n", y+1, x+1);

	return 0;
}
