#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i].first;
		a[i].second = i+1;
	}
	std::sort(a.begin(), a.end());

	auto itr = std::lower_bound(a.begin(), a.end(), std::make_pair(k, -1),
			[](const auto &a, const auto &b) { return a.first < b.first; });
	if (itr == a.begin())
		std::cout << -1 << std::endl;
	else
		std::cout << (--itr)->second << std::endl;

	return 0;
}
