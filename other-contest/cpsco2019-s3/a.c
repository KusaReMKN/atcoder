#include <stdio.h>

int
main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == 'A')
			c = 'O';
		else if (c == 'O')
			c = 'A';
		putchar(c);
	}

	return 0;
}
