#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= 9; j++)
			if (n % j == 0 && i % (n/j) == 0) {
				putchar(j + '0');
				goto next;
			}
		putchar('-');
next:		(void)0;
	}
	putchar('\n');

	return 0;
}
