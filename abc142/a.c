#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%f", 1. - (n / 2) / (double)n);

	return 0;
}
