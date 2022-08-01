#include <stdio.h>

int
main(void)
{
	int n, x, a, b;
	int dp[101][10101] = {{ 0 }};

	scanf("%d%d", &n, &x);
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &a, &b);
		for (int j = 0; j <= x; j++)
			if (dp[i-1][j])
				dp[i][j+a] = dp[i][j+b] = 1;
	}
	puts(dp[n][x] ? "Yes" : "No");

	return 0;
}
