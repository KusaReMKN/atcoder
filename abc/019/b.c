#include <stdio.h>

int
main(void)
{
	int c, prev;
	int length;

	c = getchar();
	length = 1;
	do {
		prev = c;
		c = getchar();
		if (prev != c)
			printf("%c%d", prev, length), length = 1;
		else
			length++;
	} while (c != '\n');
	putchar('\n');

	return 0;
}
