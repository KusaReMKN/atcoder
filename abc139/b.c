#include <stdio.h>

int main(void)
{
	int a, b;
	int all = 1;
	int i;

	scanf("%d%d", &a, &b);
	for (i = 0; all < b; i++)
		all += a - 1;
	printf("%d\n", i);

	return 0;
}
