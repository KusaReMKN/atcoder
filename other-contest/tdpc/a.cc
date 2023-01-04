#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::set<int>> dp(n+1);
	dp[0].insert(0);
	for (int i = 1; i <= n; i++) {
		int p;
		std::cin >> p;
		dp[i] = dp[i-1];
		for (const auto &e: dp[i-1])
			dp[i].insert(e+p);
	}
	std::cout << dp[n].size() << std::endl;

	return 0;
}
