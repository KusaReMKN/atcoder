#include <stdio.h>

int main()
{
	int k, x;

	scanf("%d%d", &k, &x);
	if (500 * k < x)
		puts("No");
	else
		puts("Yes");

	return 0;
}
