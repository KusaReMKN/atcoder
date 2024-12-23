#include <stdio.h>

int
main(void)
{
	int h, w, x, y, cnt;
	char s[101][101], t[10001];

	scanf("%d%d%d%d", &h, &w, &x, &y);
	for (int i = 0; i < h; i++)
		scanf("%s", s[i]);
	scanf("%s", t);

	x--;
	y--;
	cnt = 0;
	for (int i = 0; t[i] != '\0'; i++) {
		switch (t[i]) {
		case 'U':
			if (s[x-1][y] != '#')
				x--;
			break;
		case 'D':
			if (s[x+1][y] != '#')
				x++;
			break;
		case 'L':
			if (s[x][y-1] != '#')
				y--;
			break;
		case 'R':
			if (s[x][y+1] != '#')
				y++;
			break;
		}
		if (s[x][y] == '@')
			cnt++;
		s[x][y] = '.';
	}
	printf("%d %d %d\n", x+1, y+1, cnt);

	return 0;
}
