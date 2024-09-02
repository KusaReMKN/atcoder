#include <stdio.h>

int
main(void)
{
	int a, b, c;
	register int i;
	register int sum;

	scanf("%d%d%d", &a, &b, &c);
	sum = 0;
	for (i = 0; sum < c; i++)
		sum += i % 7 == 6 ? a+b : a;
	printf("%i\n", i);

	return 0;
}
