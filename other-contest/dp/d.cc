#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, W;
	std::cin >> n >> W;

	std::vector<std::vector<long>> dp(n+1, std::vector<long>(W+1, 0));
	for (int i = 1; i <= n; i++) {
		int w, v;
		std::cin >> w >> v;
		for (int j = 0; j <= W; j++)
			dp[i][j] = std::max(dp[i-1][j],
					w > j ? 0 : dp[i-1][j-w] + v);
	}
	std::cout << dp[n][W] << std::endl;

	return 0;
}
