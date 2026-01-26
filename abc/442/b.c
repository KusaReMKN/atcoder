#include <stdio.h>

int
main(void)
{
	int q, a;
	int v, p;

	scanf("%d", &q);
	v = p = 0;
	for (int i = 0; i < q; i++) {
		scanf("%d", &a);
		switch (a) {
		case 1:
			v++;
			break;
		case 2:
			if (v >= 1)
				v--;
			break;
		case 3:
			p = !p;
		}
		puts(v >= 3 && p ? "Yes" : "No");
	}

	return 0;
}
