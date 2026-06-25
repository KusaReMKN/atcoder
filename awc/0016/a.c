#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int cnt = 0;
	long sum = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		if (a > b) {
			cnt++;
			sum += a - b;
		}
	}
	printf("%d %ld\n", cnt, sum);

	return 0;
}
