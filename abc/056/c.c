#include <stdio.h>

int
main(void)
{
	int x;
	scanf("%d", &x);

	long i = 0;
	while (i*(i+1) / 2 < x)
		i++;
	printf("%ld\n", i);

	return 0;
}
