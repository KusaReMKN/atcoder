#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		if (isdigit(c))
			putchar(c);
	putchar('\n');

	return 0;
}
