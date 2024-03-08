#include <stdio.h>

int
main(void)
{
	int i, n, p;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		p = 0;
		if (i % 2 == 0)
			p += putchar('a');
		if (i % 3 == 0)
			p += putchar('b');
		if (i % 4 == 0)
			p += putchar('c');
		if (i % 5 == 0)
			p += putchar('d');
		if (i % 6 == 0)
			p += putchar('e');
		if (!p)
			printf("%d", i);
		putchar('\n');
	}

	return 0;
}
