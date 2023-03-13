#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> h(n);
	for (auto &e: h)
		std::cin >> e;

	std::vector<int> dp(n);
	dp[0] = 0;
	dp[1] = std::abs(h[0] - h[1]);
	for (int i = 2; i < n; i++) {
		auto h1 = std::abs(h[i] - h[i-1]);
		auto h2 = std::abs(h[i] - h[i-2]);
		dp[i] = std::min(dp[i-1] + h1, dp[i-2] + h2);
	}
	std::cout << dp[n-1] << std::endl;

	return 0;
}
