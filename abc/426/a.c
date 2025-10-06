#include <stdio.h>
#include <string.h>

int
main(void)
{
	int a, b;
	char x[16], y[16];
	const char *ctab[] = { "Ocelot", "Serval", "Lynx" };

	scanf("%s%s", x, y);
	for (int i = 0; i < 3; i++) {
		if (strcmp(x, ctab[i]) == 0)
			a = i;
		if (strcmp(y, ctab[i]) == 0)
			b = i;
	}
	puts(a >= b ? "Yes" : "No");

	return 0;
}
