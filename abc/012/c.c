#include <stdio.h>

int
main(void)
{
	int n;
	int s = 2025;

	scanf("%d", &n);
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
			if (i * j == s - n)
				printf("%d x %d\n", i, j);

	return 0;
}
