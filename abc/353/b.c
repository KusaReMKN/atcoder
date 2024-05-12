#include <stdio.h>

int
main(void)
{
	int n, k;
	int a;
	int cnt, cur;

	scanf("%d%d", &n, &k);
	cnt = 0;
	cur = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (cur + a > k) {
			cnt++;
			cur = a;
		} else {
			cur += a;
		}
	}
	if (cur > 0)
		cnt++;
	printf("%d\n", cnt);

	return 0;
}
