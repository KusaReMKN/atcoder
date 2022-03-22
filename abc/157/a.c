#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d\n", (a & 1) ? a / 2 + 1 : a / 2);
	return 0;
}
