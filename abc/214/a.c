#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	if (n >= 212)
		puts("8");
	else if (n >= 126)
		puts("6");
	else
		puts("4");

	return 0;
}
