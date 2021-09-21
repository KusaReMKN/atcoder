#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a + b + c >= 22)
		puts("bust");
	else
		puts("win");

	return 0;
}
