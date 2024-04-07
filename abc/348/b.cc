#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, int>> p(n);
	for (auto &e: p)
		std::cin >> e.first >> e.second;

	for (auto &e: p) {
		long max = 0;
		int index = -1;
		for (int i = 0; i < n; i++) {
			long dx = p[i].first - e.first;
			long dy = p[i].second - e.second;
			if (max < dx*dx + dy*dy) {
				max = dx*dx + dy*dy;
				index = i;
			}
		}
		std::cout << index+1 << std::endl;
	}

	return 0;
}
