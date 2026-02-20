#include <stdio.h>

static int
f(int i)
{
	int sum;

	sum = 0;
	for (; i > 0; i /= 10)
		sum += i % 10;

	return sum;
}

int
main(void)
{
	int c, n, k;

	scanf("%d%d", &n, &k);
	c = 0;
	for (int i = 1; i <= n; i++)
		if (f(i) == k)
			c++;
	printf("%d\n", c);

	return 0;
}
