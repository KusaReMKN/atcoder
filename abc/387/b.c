#include <stdio.h>

int
main(void)
{
	int x, sum;

	scanf("%d", &x);
	sum = 0;
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
			if (i*j != x)
				sum += i*j;
	printf("%d\n", sum);

	return 0;
}
