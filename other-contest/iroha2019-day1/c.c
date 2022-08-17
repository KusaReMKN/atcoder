#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= 8; i++)
		printf("%d\n", n-8+i);

	return 0;
}
