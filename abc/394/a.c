#include <stdio.h>

int
main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		if (c == '2')
			putchar(c);

	return 0;
}
