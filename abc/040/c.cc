#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::vector<long> dp(n);
	dp[0] = 0;
	dp[1] = dp[0] + std::abs(a[1]-a[0]);
	for (auto i = 2; i < n; i++) {
		auto d1 = dp[i-1] + std::abs(a[i]-a[i-1]);
		auto d2 = dp[i-2] + std::abs(a[i]-a[i-2]);
		dp[i] = std::min(d1, d2);
	}
	std::cout << dp.back() << std::endl;

	return 0;
}
