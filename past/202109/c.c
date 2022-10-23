#include <stdio.h>

int
main(void)
{
	int n, x, a;
	int cnt;

	scanf("%d%d", &n, &x);
	cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (x == a)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
