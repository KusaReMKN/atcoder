#include <stdio.h>

int
main(void)
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > c || a == c && b > d)
		puts("Yes");
	else
		puts("No");

	return 0;
}
