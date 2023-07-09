#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::pair<int, int>> ab(n);
	for (auto &e: ab)
		std::cin >> e.first >> e.second;
	std::sort(ab.rbegin(), ab.rend());

	int d = 0;
	long sum = 0;
	for (const auto &e: ab)
		if ((sum += e.second) > k) {
			d = e.first;
			break;
		}
	std::cout << d+1 << std::endl;

	return 0;
}
