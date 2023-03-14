#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::vector<int>> dp(n, std::vector<int>(3));
	std::cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
	for (int i = 1; i < n; i++) {
		int a, b, c;
		std::cin >> a >> b >> c;

		dp[i][0] = std::max(dp[i-1][1], dp[i-1][2]) + a;
		dp[i][1] = std::max(dp[i-1][2], dp[i-1][0]) + b;
		dp[i][2] = std::max(dp[i-1][0], dp[i-1][1]) + c;
	}
	std::cout << *std::max_element(dp[n-1].begin(), dp[n-1].end())
		<< std::endl;

	return 0;
}
