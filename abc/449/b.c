#include <stdio.h>

int
main(void)
{
	int h, w, q;
	int f, n;

	scanf("%d%d%d", &h, &w, &q);
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &f, &n);
		switch (f) {
		case 1:
			printf("%d\n", w * n);
			h -= n;
			break;
		case 2:
			printf("%d\n", n * h);
			w -= n;
			break;
		}
	}

	return 0;
}
