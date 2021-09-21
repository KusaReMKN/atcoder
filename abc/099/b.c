#include <stdio.h>

int main(void)
{
	int a, b;
	int i;

	scanf("%d%d", &a, &b);
	for (i = b - a; i > 0; i--)
		b -= i;
	printf("%d\n", -b);

	return 0;
}
