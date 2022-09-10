#include <stdio.h>

int
main(void)
{
	int a, b, k;

	scanf("%d%d%d", &a, &b, &k);
	for (int i = 0; i < k; i++)
		if (i & 1)
			a += (b >>= 1);
		else
			b += (a >>= 1);
	printf("%d %d\n", a, b);

	return 0;
}
