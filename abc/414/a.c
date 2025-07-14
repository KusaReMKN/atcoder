#include <stdio.h>

int
main(void)
{
	int n, l, r;
	int x, y;
	int cnt;

	scanf("%d%d%d", &n, &l, &r);
	cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		if (x <= l && r <= y)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
