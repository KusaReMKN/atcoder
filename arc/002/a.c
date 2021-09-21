#include <stdio.h>

int main(void)
{
	int y;

	scanf("%d", &y);
	if (y % 400 == 0)
		puts("YES");
	else if (y % 100 == 0)
		puts("NO");
	else if (y % 4 == 0)
		puts("YES");
	else
		puts("NO");

	return 0;
}
