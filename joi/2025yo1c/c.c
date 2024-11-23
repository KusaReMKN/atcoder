#include <stdio.h>

int
main(void)
{
	int n, a, b;
	int cnt = 0;

	scanf("%d%d%d", &n, &a, &b);
	cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (i % a == 0 && i % b != 0
				|| i % a != 0 && i % b == 0)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
