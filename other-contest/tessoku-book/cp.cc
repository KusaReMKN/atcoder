#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> h(n+1);
	for (int i = 1; i <= n; i++)
		std::cin >> h[i];

	std::vector<std::pair<long, int>> dp(n+1);
	dp[1] = { 0, 0 };
	dp[2] = { std::abs(h[1] - h[2]), 1 };
	for (int i = 3; i <= n; i++) {
		auto d1 = dp[i-1].first + std::abs(h[i] - h[i-1]);
		auto d2 = dp[i-2].first + std::abs(h[i] - h[i-2]);
		if (d1 < d2)
			dp[i] = { d1, i-1 };
		else
			dp[i] = { d2, i-2 };
	}

	std::vector<int> p;
	p.push_back(n);
	while (p.back() > 0)
		p.push_back(dp[p.back()].second);
	p.pop_back();

	std::cout << p.size() << std::endl;
	for (auto itr = p.rbegin(); itr != p.rend(); itr++)
		std::cout << *itr << ' ';
	std::cout << std::endl;

	return 0;
}
