#include <stdio.h>

int
main(void)
{
	int n, q, a, l, r;
	int sum[100001];
	int win, lose;

	scanf("%d", &n);
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		sum[i] = sum[i-1] + a;
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &l, &r);
		win = sum[r] - sum[l-1];
		lose = r-l+1 - win;
		puts(win == lose ? "draw" : win > lose ? "win" : "lose");
	}

	return 0;
}
