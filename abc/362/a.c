#include <stdio.h>
#include <string.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int r, g, b;
	char c[10];

	scanf("%d%d%d", &r, &g, &b);
	scanf("%s", c);
	if (strcmp(c, "Red") == 0)
		printf("%d\n", MIN(g, b));
	if (strcmp(c, "Green") == 0)
		printf("%d\n", MIN(r, b));
	if (strcmp(c, "Blue") == 0)
		printf("%d\n", MIN(r, g));

	return 0;
}
