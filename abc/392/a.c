#include <stdio.h>

int
main(void)
{
	int a1, a2, a3;

	scanf("%d%d%d", &a1, &a2, &a3);
	if (a1 * a2 == a3 || a1 * a3 == a2 || a2 * a3 == a1)
		puts("Yes");
	else
		puts("No");

	return 0;
}
