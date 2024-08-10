#include <stdio.h>

int
main(void)
{
	int n, t, a;

	scanf("%d%d%d", &n, &t, &a);
	if (n / 2 < t || n / 2 < a)
		puts("Yes");
	else
		puts("No");

	return 0;
}
