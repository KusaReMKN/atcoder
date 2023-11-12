#include <stdio.h>

int
main(void)
{
	int n, x;
	int s;
	int sum;

	scanf("%d%d", &n, &x);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &s);
		if (s <= x)
			sum += s;
	}
	printf("%d\n", sum);

	return 0;
}
