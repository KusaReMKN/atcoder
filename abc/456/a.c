#include <stdio.h>

int
main(void)
{
	int x;

	scanf("%d", &x);
	puts(1+1+1 <= x && x <= 6+6+6 ? "Yes" : "No");

	return 0;
}
