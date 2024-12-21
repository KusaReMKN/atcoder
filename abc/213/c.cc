#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int h, w, n;
	std::cin >> h >> w >> n;

	std::vector<std::pair<int, int>> v(n);
	std::map<int, int> ma, mb;
	for (auto &e: v) {
		std::cin >> e.first >> e.second;
		ma[e.first] = mb[e.second] = -1;
	}

	int i = 0;
	for (auto &e: ma)
		e.second = ++i;
	i = 0;
	for (auto &e: mb)
		e.second = ++i;

	for (const auto &e: v)
		std::cout << ma[e.first] << ' ' << mb[e.second] << std::endl;

	return 0;
}
