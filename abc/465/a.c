#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	puts(a*3 > b*2 ? "Yes" : "No");

	return 0;
}
