#include <stdio.h>

int
main(void)
{
	int n, x, y;
	char b[101];

	scanf("%d", &n);
	x = y = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", b);
		for (int j = 0; j < n; j++) {
			if (b[j] == 'X')
				x += i - 0;
			if (b[j] == 'Y')
				y += n - i - 1;
		}
	}
	if (x == y)
		puts("Impossible");
	else
		puts(x > y ? "X" : "Y");

	return 0;
}
