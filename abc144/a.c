#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (a > 9 || b > 9)
		puts("-1");
	else
		printf("%d\n", a * b);

	return 0;
}
