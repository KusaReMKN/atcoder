#include <stdio.h>

int
main(void)
{
	int q, f;
	int stack[1000], p;

	for (int i = 0; i < 100; i++)
		stack[i] = 0;
	p = 100;

	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &f);
		switch (f) {
		case 1:
			scanf("%d", &stack[p++]);
			break;
		case 2:
			printf("%d\n", stack[--p]);
			break;
		}
	}

	return 0;
}
