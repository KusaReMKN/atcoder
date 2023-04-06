#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))
#define manhattan(y1, x1, y2, x2)	(abs((y1) - (y2)) + abs((x1) - (x2)))

static void
bomb(char b[21][21], int r, int c, int y, int x)
{
	int d;

	d = b[y][x] - '0';
	for (int i = MAX(y-d, 0); i <= MIN(y+d, r-1); i++)
		for (int j = MAX(x-d, 0); j <= MIN(x+d, c-1); j++)
			if (manhattan(y, x, i, j) <= d)
				if (b[i][j] == '#')
					b[i][j] = '.';
}

int
main(void)
{
	int r, c;
	char b[21][21];

	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++)
		scanf("%s", b[i]);
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (isdigit(b[i][j]))
				bomb(b, r, c, i, j), b[i][j] = '.';
	for (int i = 0; i < r; i++)
		puts(b[i]);

	return 0;
}
