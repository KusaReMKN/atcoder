#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%X%X", &a, &b);
	if (a < b)
		puts("<");
	else if (a > b)
		puts(">");
	else
		puts("=");

	return 0;
}
