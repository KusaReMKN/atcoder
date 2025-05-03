#include <stdio.h>

int
main(void)
{
	int q, f;
	int v[100], pi, po;

	scanf("%d", &q);
	pi = po = 0;
	for (int i = 0; i < q; i++) {
		scanf("%d", &f);
		switch (f) {
		case 1:
			scanf("%d", &v[pi++]);
			break;
		case 2:
			printf("%d\n", v[po++]);
		}
	}

	return 0;
}
