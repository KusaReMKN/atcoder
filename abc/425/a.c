#include <stdio.h>

int
main(void)
{
	int n;
	int sum;

	scanf("%d", &n);
	sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (i & 1 ? -i : i) * i*i;
	printf("%d\n", sum);

	return 0;
}
