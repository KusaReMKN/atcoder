#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::pair<int, int>> vt(n);
	for (auto &e: vt)
		std::cin >> e.second >> e.first;

	std::sort(vt.begin(), vt.end());

	std::vector<int> dp(m+1, -1);
	dp[0] = 0;
	for (const auto &e: vt) {
		std::vector<int> dp0(dp);
		for (int i = 0; i <= m; i++) {
			auto t = i + e.first;
			if (dp0[i] != -1 && t <= m)
				dp[t] = std::max(dp0[t], dp0[i]+e.second);
		}
	}

	int max = -1;
	for (int i = m; i >= 0; i--)
		max = std::max(max, dp[i]);
	std::cout << max << std::endl;

	return 0;
}
