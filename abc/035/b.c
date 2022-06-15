#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int c, t;
	int x, y, q;

	x = y = q = 0;
	while ((c = getchar()) != '\n')
		switch (c) {
		case 'L':
			x--;
			break;
		case 'R':
			x++;
			break;
		case 'U':
			y++;
			break;
		case 'D':
			y--;
			break;
		case '?':
			q++;
			break;
		}
	scanf("%d", &t);
	if (t == 1) {
		while (q--)
			x < 0 ? x-- : x++;
	} else {
		while (q--)
			if (abs(x) < abs(y))
				y < 0 ? y++ : y--;
			else
				x < 0 ? x++ : x--;
	}
	printf("%d\n", abs(x)+abs(y));

	return 0;
}
