#include <sys/param.h>

#include <stdio.h>

int
main(void)
{
	int h, b;

	scanf("%d%d", &h, &b);
	printf("%d\n", MAX(0, h-b));

	return 0;
}
