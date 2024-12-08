#include <stdio.h>

int
main(void)
{
	int n, k;

	scanf("%d%d", &n, &k);
	puts(k < 2*(n-1) || (k & 1) ? "No" : "Yes");

	return 0;
}
