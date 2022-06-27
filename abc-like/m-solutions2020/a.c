#include <stdio.h>

int
main(void)
{
	int x;

	scanf("%d", &x);
	for (int i = 1; ; i++)
		if (x >= 2000 - 200*i)
			return printf("%d\n", i), 0;

	return -1;
}
