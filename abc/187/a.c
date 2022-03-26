#include <stdio.h>

int main(void)
{
	int a, b;
	int sa = 0, sb = 0;

	scanf("%d%d", &a, &b);
	for (int i = 0; i < 3; i++) {
		sa += a % 10; sb += b % 10;
		a /= 10; b /= 10;
	}
	printf("%d\n", sa < sb ? sb : sa);
	return 0;
}
