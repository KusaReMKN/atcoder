#include <stdio.h>

int
main(void)
{
	int n;

	scanf("ABC%d", &n);
	puts(n < 350 && n > 0 && n != 316 ? "Yes" : "No");

	return 0;
}
