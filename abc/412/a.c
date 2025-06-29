#include <stdio.h>

int
main(void)
{
	int n, a, b;
	int cnt;

	scanf("%d", &n);
	cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		if (a < b)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
