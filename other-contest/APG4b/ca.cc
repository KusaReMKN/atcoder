#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, int>> ab(n);
	for (auto &e: ab)
		std::cin >> e.first >> e.second;
	std::sort(ab.begin(), ab.end(), [](auto a, auto b) { return a.second < b.second; });

	for (const auto &e: ab)
		std::cout << e.first << ' ' << e.second << std::endl;

	return 0;
}
