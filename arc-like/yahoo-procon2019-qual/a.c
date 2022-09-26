#include <stdio.h>

int
main(void)
{
	int n, k;

	scanf("%d%d", &n, &k);
	puts(n/2 + n%2 >= k ? "YES" : "NO");

	return 0;
}
