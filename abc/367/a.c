#include <stdio.h>

int
main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (b < c)
		puts(a < b || c < a ? "Yes" : "No");
	else
		puts(c < a && a < b ? "Yes" : "No");

	return 0;
}
