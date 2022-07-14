#include <stdio.h>

int
main(void)
{
	int n;
	int b0, b;
	int sum;

	scanf("%d", &n);
	scanf("%d", &b0);
	sum = b = b0;
	for (int i = 0; i < n-1; i++) {
		scanf("%d", &b);
		sum += b0 < b ? b0 : b;
		b0 = b;
	}
	printf("%d\n", sum);

	return 0;
}
