#include <stdio.h>

int
main(void)
{
	int n, a;
	int sum;

	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (i % 2 == 0)
			sum += a;
	}
	printf("%d\n", sum);

	return 0;
}
