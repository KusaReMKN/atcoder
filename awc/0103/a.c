#include <stdio.h>

int
main(void)
{
	int n, k;
	long x;

	scanf("%d%d", &n, &k);
	for (int i = 0; i < k; i++)
		scanf("%ld", &x);
	printf("%ld\n", x-1);

	return 0;
}
