#include <stdio.h>

int
main(void)
{
	int sum;

	sum = 0;
	for (int i = 1; i <= 100; i++)
		if (i % 3 != 0 && i % 5 != 0)
			sum += i;
	printf("%d\n", sum);

	return 0;
}
