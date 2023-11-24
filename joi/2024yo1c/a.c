#include <stdio.h>

int
main(void)
{
	int h, m;

	scanf("%d%d", &h, &m);
	printf("%d\n", h*60 + m);

	return 0;
}
