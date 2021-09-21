#include <stdio.h>

int main(void)
{
	int c = getchar();

	if (c == '3' || c == '5' || c == '7')
		puts("YES");
	else
		puts("NO");

	return 0;
}
