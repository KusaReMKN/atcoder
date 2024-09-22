#include <stdio.h>

int
main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		if (c != '.')
			putchar(c);

	return 0;
}
