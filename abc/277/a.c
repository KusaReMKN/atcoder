#include <stdio.h>

int
main(void)
{
	int n, x, p;

	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p);
		if (p == x)
			printf("%d\n", i+1);
	}

	return 0;
}
