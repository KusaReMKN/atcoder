#include <stdio.h>

int
main(void)
{
	int x, h, m;

	scanf("%d%d%d", &x, &h, &m);
	printf("%d\n", x+(m>x)*60-m);

	return 0;
}
