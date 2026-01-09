#include <stdio.h>

int
main(void)
{
	int d, f;

	scanf("%d%d", &d, &f);
	for (f--; f < d; f += 7)
		;
	f %= d;
	printf("%d\n", ++f);

	return 0;
}
