#include <stdio.h>
#include <math.h>

int
isprime(int x)
{
	int k = (int)floor(sqrt((double) x));

	for (int i = 2; i <= k; i++)
		if (x % i == 0)
			return 0;
	return 1;
}

int
main(void)
{
	int x;

	scanf("%d", &x);
	while (!isprime(x++));
	printf("%d\n", --x);

	return 0;
}
