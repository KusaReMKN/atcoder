#include <stdio.h>

static int
f(int i)
{
	int a, b, p;

	p = i % 10;
	i /= 10;
	a = i % 10;
	i /= 10;
	b = i % 10;

	return a * b == p;
}

int
main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = n; ; i++)
		if (f(i)) {
			printf("%d\n", i);
			return 0;
		}
	/* NOTREACHED */
}
