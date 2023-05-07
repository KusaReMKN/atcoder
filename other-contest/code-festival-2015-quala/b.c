#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		sum <<= 1;
		sum += a;
	}
	printf("%d\n", sum);

	return 0;
}
