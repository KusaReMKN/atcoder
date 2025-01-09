#include <stdio.h>

int
main(void)
{
	int h, w, q;
	int f, x, y, c;
	int p[500][500] = { 0 };
	int m[500][500] = { 0 };
	int i, j, k;

	scanf("%d%d%d", &h, &w, &q);
	for (i = 0; i < q; i++) {
		scanf("%d", &f);
		switch (f) {
		case 1:
			scanf("%d%d%d", &x, &y, &c);
			for (j = -1; j < 1; j++)
				for (k = -1; k < 1; k++)
					if (m[x+j][y+k] == 0)
						p[x+j][y+k] = c;
			break;
		case 2:
			scanf("%d%d", &x, &y);
			for (j = -1; j < 1; j++)
				for (k = -1; k < 1; k++)
					m[x+j][y+k] = 1;
			break;
		}
	}
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++)
			printf("%s%d", j < 1 ? "" : " ", p[i][j]);
		printf("\n");
	}

	return 0;
}
