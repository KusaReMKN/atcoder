#include <stdio.h>

int
main(void)
{
	int a, d;

	scanf("%d%d", &a, &d);
	puts(a <= d ? "Yes" : "No");

	return 0;
}
