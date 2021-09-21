#include <stdio.h>

int main(void)
{
	int n;
	int a;

	scanf("%d", &n);
	for (a = 1; n >= a; a <<= 1);
	printf("%d\n", a >> 1);

	return 0;
}
