#include <stdio.h>

int main()
{
	int n, x, v, p;
	int sum = 0;

	scanf("%d%d", &n, &x);
	x *= 100;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &v, &p);
		sum += v * p;
		if (x < sum)
			return printf("%d\n", i + 1), 0;
	}
	printf("-1\n");

	return 0;
}
