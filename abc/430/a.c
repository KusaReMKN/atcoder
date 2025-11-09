#include <stdio.h>

int
main(void)
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (c >= a && d < b)
		puts("Yes");
	else
		puts("No");

	return 0;
}
