#include <stdio.h>

int
main(void)
{
	long a, b;

	scanf("%ld%ld", &a, &b);
	if (a * b < 0)
		b--;
	printf("%ld\n", b-a);

	return 0;
}
