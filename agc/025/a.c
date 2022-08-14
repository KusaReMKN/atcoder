#include <stdio.h>

int
main(void)
{
	int n;
	int sum;

	scanf("%d", &n);
	if (n % 10 == 0)
		return puts("10"), 0;
	sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	printf("%d\n", sum);

	return 0;
}
