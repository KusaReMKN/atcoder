#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%f", (a - b) / 3. + b);

	return 0;
}
