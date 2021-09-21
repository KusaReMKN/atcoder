#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	if (n > 999)
		puts("ABD");
	else
		puts("ABC");

	return 0;
}
