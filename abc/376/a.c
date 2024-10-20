#include <stdio.h>

int
main(void)
{
	int n, c, t;
	int prev, cnt;

	scanf("%d%d", &n, &c);
	scanf("%d", &prev);
	cnt = 1;
	for (int i = 1; i < n; i++) {
		scanf("%d", &t);
		if (t - prev < c)
			continue;
		cnt++;
		prev = t;
	}
	printf("%d\n", cnt);

	return 0;
}
