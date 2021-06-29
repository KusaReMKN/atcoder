#include <stdio.h>

int main()
{
	int n, r;

	scanf("%d%d", &n, &r);
	if (n >= 10)
		printf("%d\n", r);
	else
		printf("%d\n", r + 100 * (10 - n));

	return 0;
}
