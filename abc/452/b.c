#include <stdio.h>

int
main(void)
{
	int h, w;

	scanf("%d%d", &h, &w);
	for (int j = 0; j < w; j++)
		putchar('#');
	putchar('\n');
	for (int i = 1; i < h-1; i++) {
		putchar('#');
		for (int j = 1; j < w-1; j++)
			putchar('.');
		putchar('#');
		putchar('\n');
	}
	for (int j = 0; j < w; j++)
		putchar('#');
	putchar('\n');

	return 0;
}
