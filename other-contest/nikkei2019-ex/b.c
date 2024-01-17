#include <stdio.h>

int
main(void)
{
	int n;
	int i;

	scanf("%d", &n);
	for (i = 0; i*i <= n; i++)
		;
	printf("%d\n", i-1);

	return 0;
}
