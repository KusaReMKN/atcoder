#include <stdio.h>

int
main(void)
{
	int n, a, b;
	int x, y;

	scanf("%d", &n);
	x = y = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		if (x < a)
			x = a, y = b;
	}
	while (y--)
		x++;
	printf("%d\n", x);

	return 0;
}
