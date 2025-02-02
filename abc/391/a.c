#include <stdio.h>

int
main(void)
{
	char d[3];
	scanf("%s", d);

	int i;
	const char *tab[] = {
		"N", "NE", "E", "SE", "S", "SW", "W", "NW",
	};
	for (i = 0; strcmp(d, tab[i]) != 0; i++)
		;
	puts(tab[(i+4) % 8]);

	return 0;
}
