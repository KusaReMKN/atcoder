#include <stdio.h>

int
main(void)
{
	int n;
	int a0, a1;
	int sum;

	scanf("%d", &n);
	if (n % 2 == 1)
		return puts("error"), 0;
	sum = 0;
	for (int i = 0; i < n; i += 2) {
		scanf("%d%d", &a0, &a1);
		sum += a1 - a0;
	}
	printf("%d\n", sum);

	return 0;
}
