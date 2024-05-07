#include <stdio.h>

int
main(void)
{
	int n;
	char *v[] = { "maspy", "square1001", "PCTprobability" };

	scanf("%d", &n);
	puts(v[--n]);

	return 0;
}
