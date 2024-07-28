#include <stdio.h>

int
main(void)
{
	int h, w;
	int si, sj;
	char c[51][51];
	char x[51];

	scanf("%d%d", &h, &w);
	scanf("%d%d", &si, &sj);
	si--, sj--;
	for (int i = 0; i < h; i++)
		scanf("%s", c[i]);
	scanf("%s", x);

	for (int i = 0; x[i] != '\0'; i++)
		switch (x[i]) {
		case 'L':
			if (sj >= 1 && c[si][sj-1] == '.')
				sj--;
			break;
		case 'R':
			if (sj < w-1 && c[si][sj+1] == '.')
				sj++;
			break;
		case 'U':
			if (si >= 1 && c[si-1][sj] == '.')
				si--;
			break;
		case 'D':
			if (si < h-1 && c[si+1][sj] == '.')
				si++;
			break;
		}
	printf("%d %d\n", si+1, sj+1);

	return 0;
}
