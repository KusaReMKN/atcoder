#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n+1);
	for (int i = 2; i <= n; i++)
		std::cin >> a[i];

	std::vector<int> b(n+1);
	for (int i = 3; i <= n; i++)
		std::cin >> b[i];

	std::vector<std::pair<int, int>> dp(n+1);
	dp[1] = { 0, 0 };
	dp[2] = { a[2] , 1 };
	for (int i = 3; i <= n; i++)
		if (dp[i-1].first + a[i] < dp[i-2].first + b[i]) {
			dp[i] = dp[i-1];
			dp[i].first += a[i];
			dp[i].second = i-1;
		} else {
			dp[i] = dp[i-2];
			dp[i].first += b[i];
			dp[i].second = i-2;
		}

	std::vector<int> l;
	l.push_back(n);
	while (l.back() != 0)
		l.push_back(dp[l.back()].second);
	l.pop_back();

	std::cout << l.size() << std::endl;
	for (auto itr = l.rbegin(); itr != l.rend(); itr++)
		std::cout << *itr << ' ';
	std::cout << std::endl;

	return 0;
}
