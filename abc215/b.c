#include <stdio.h>

int main(void)
{
	unsigned long long n;
	int i;

	scanf("%llu", &n);
	for (i = 0; n /= 2; i++);
	printf("%d\n", i);

	return 0;
}
