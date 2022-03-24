#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	n %= 1000;
	if (!n) return puts("0"), 0;
	return printf("%d\n", 1000 - n), 0;
}
