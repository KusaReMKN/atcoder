#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, int>> v(n);
	for (auto &e: v)
		std::cin >> e.second >> e.first;
	std::sort(v.begin(), v.end());

	auto tail = v.back();
	v.pop_back();

	int max = 0;
	for (const auto &e: v) {
		auto sum = tail.second == e.second
			? tail.first + e.first / 2
			: tail.first + e.first;
		if (max < sum)
			max = sum;
	}
	std::cout << max << std::endl;

	return 0;
}
