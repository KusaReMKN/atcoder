#include <stdio.h>

int
main(void)
{
	int a, b, c;
	int i, x, y, z;

	scanf("%d%d%d", &a, &b, &c);
	if (a == b && b == c)
		return puts(a & 1 ? "0" : "-1"), 0;
	for (i = 0; ((a | b | c) & 1) == 0; i++) {
		x = b/2 + c/2;
		y = a/2 + c/2;
		z = a/2 + b/2;
		a = x, b = y, c = z;
	}
	printf("%d\n", i);

	return 0;
}
