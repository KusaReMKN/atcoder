#include <stdio.h>

int
main(void)
{
	int a, b;
	long long k;

	scanf("%d%d%*d%lld", &a, &b, &k);
	printf("%d\n", k & 1 ? b - a : a - b);

	return 0;
}
