#include <stdio.h>

int
main(void)
{
	int n, h, w, a, b;
	int cnt;

	scanf("%d%d%d", &n, &h, &w);
	cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		if (a >= h && b >= w)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
