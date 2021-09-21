#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (!a)
		puts("Silver");
	else if (!b)
		puts("Gold");
	else
		puts("Alloy");

	return 0;
}
