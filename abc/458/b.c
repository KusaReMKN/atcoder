#include <stdio.h>

int
main(void)
{
	int h, w;
	int c;

	scanf("%d%d", &h, &w);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			c = 4;
			if (i == 0)
				c--;
			if (i+1 == h)
				c--;
			if (j == 0)
				c--;
			if (j+1 == w)
				c--;
			printf("%s%d", j > 0 ? " " : "", c);
		}
		printf("\n");
	}

	return 0;
}
