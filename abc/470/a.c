#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		if (i % 3 == 0)
			printf("Fizz\n");
		else
			printf("%d\n", i);

	return 0;
}
