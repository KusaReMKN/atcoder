#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n+1, 0);
	for (int i = 2; i <= n; i++)
		std::cin >> a[i];

	std::vector<int> b(n+1, 0);
	for (int i = 3; i <= n; i++)
		std::cin >> b[i];

	std::vector<int> dp(n+1, 0);
	dp[2] = a[2];
	for (int i = 3; i <= n; i++)
		dp[i] = std::min(dp[i-1]+a[i], dp[i-2]+b[i]);
	std::cout << dp[n] << std::endl;

	return 0;
}
