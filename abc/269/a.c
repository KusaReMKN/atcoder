#include <stdio.h>

int
main(void)
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n%s\n", (a+b) * (c-d), "Takahashi");

	return 0;
}
