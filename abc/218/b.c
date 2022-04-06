#include <stdio.h>

main()
{
	int p;

	while (scanf("%d", &p) != EOF)
		putchar(p - 1 + 'a');
	putchar('\n');
}
