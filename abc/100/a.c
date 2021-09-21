#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (a > 8 || b > 8)
		puts(":(");
	else
		puts("Yay!");

	return 0;
}
