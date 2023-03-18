#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, W;
	std::cin >> n >> W;

	std::vector<std::vector<long>> dp(n+1, std::vector<long>(100001, W+1));
	dp[0][0] = 0;
	for (int i = 1; i <= n; i++) {
		int w, v;
		std::cin >> w >> v;
		for (int j = 0; j <= 100000; j++)
			dp[i][j] = std::min(dp[i-1][j],
					v > j ? W+1 : dp[i-1][j-v] + w);
	}
	for (int i = 100000; i >= 0; i--)
		if (dp[n][i] <= W) {
			std::cout << i << std::endl;
			break;
		}

	return 0;
}
