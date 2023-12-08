#include <stdio.h>

int
main(void)
{
	int m;

	scanf("%d", &m);
	puts(4 <= m && m <= 9 ? "Yes" : "No");

	return 0;
}
