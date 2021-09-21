#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (b % a)
		printf("%d\n", b - a);
	else
		printf("%d\n", a + b);

	return 0;
}
