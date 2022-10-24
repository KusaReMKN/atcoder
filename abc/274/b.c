#include <stdio.h>

int
main(void)
{
	int h, w;
	char c[1001][1001];
	int cnt;

	scanf("%d%d", &h, &w);
	for (int i = 0; i < h; i++)
		scanf("%s", c[i]);
	for (int i = 0; i < w; i++) {
		cnt = 0;
		for (int j = 0; j < h; j++)
			if (c[j][i] == '#')
				cnt++;
		printf("%s%d", i ? " " : "", cnt);
	}
	printf("\n");

	return 0;
}
