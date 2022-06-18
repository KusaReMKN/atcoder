#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int h1, h2, h3, w1, w2, w3;
	int cnt = 0;

	scanf("%d%d%d%d%d%d", &h1, &h2, &h3, &w1, &w2, &w3);
	for (int i = 1; i < min(h1, w1); i++) {
		for (int j = 1; j < min(h1, w2); j++) {
			for (int k = 1; k < min(h2, w1); k++) {
				for (int l = 1; l < min(h2, w2); l++) {
					int a, b, c, d, e1, e2;
					a = h1 - (i+j);
					b = h2 - (k+l);
					e1 = w3 - (a+b);
					c = w1 - (i+k);
					d = w2 - (j+l);
					e2 = h3 - (c+d);
					if (a > 0 && b > 0 && c > 0 && d > 0
							&& e1 == e2 && e1 > 0)
						cnt++;
				}
			}
		}
	}
	printf("%d\n", cnt);

	return 0;
}
