#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (a == b)
		puts("1");
	else if ((a - b) % 2 == 0)
		puts("3");
	else
		puts("2");

	return 0;
}
