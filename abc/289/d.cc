#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	int m;
	std::cin >> m;

	std::map<int, int> dp;
	for (int i = 0; i < m; i++) {
		int b;
		std::cin >> b;
		dp[b] = -1;
	}

	int x;
	std::cin >> x;

	dp[0] = 1;
	for (int i = 1; i <= x; i++)
		for (int j = 0; j < n; j++)
			if (dp[i] != -1 && dp[i-a[j]] == 1) {
				dp[i] = 1;
				break;
			}
	std::cout << (dp[x] == 1 ? "Yes" : "No") << std::endl;

	return 0;
}
