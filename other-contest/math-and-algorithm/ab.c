#include <stdio.h>

int
main(void)
{
	int n;
	long dp[46];

	scanf("%d", &n);
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i-2] + dp[i-1];
	printf("%ld\n", dp[n]);

	return 0;
}
