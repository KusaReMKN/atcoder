#include <stdio.h>

int
main(void)
{
	int n, m;

	scanf("%d%d", &n, &m);
	printf("%ld\n", (long)(2*n+1)*(n+1)*n/6 % m);

	return 0;
}
