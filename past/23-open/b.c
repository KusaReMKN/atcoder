#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (c < 0)
		printf("%d -> %d (%+d)\n", MAX(a, b), MIN(a, b), c);
	else
		printf("%d -> %d (%+d)\n", MIN(a, b), MAX(a, b), c);

	return 0;
}
