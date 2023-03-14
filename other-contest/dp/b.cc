#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> h(n);
	for (auto &e: h)
		std::cin >> e;

	std::vector<int> dp(n, 999999999);
	dp[0] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= k && i+j < n; j++) {
			auto d = std::abs(h[i] - h[i+j]);
			dp[i+j] = std::min(dp[i+j], dp[i] + d);
		}
	std::cout << dp[n-1] << std::endl;

	return 0;
}
