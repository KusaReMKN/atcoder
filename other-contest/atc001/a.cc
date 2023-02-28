#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <string>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::string> c(h);
	for (auto &r: c)
		std::cin >> r;

	std::pair<int, int> s, g;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			if (c[i][j] == 's')
				s = std::make_pair(i, j);
			else if (c[i][j] == 'g')
				g = std::make_pair(i, j);

	std::vector<std::pair<int, int>> const diff = {
		{ -1,  0 }, { +1,  0 },
		{  0, -1 }, {  0, +1 },
	};
	std::set<std::pair<int, int>> visit;
	std::vector<std::pair<int, int>> v = { s };
	while (!v.empty()) {
		auto last = v.back();
		v.pop_back();
		visit.insert(last);
		if (last == g) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
		for (auto const &e: diff) {
			auto y = last.first  + e.first;
			auto x = last.second + e.second;
			if (x < 0 || w <= x || y < 0 || h <= y
					|| c[y][x] == '#')
				continue;
			auto t = std::make_pair(y, x);
			if (visit.count(t) == 0)
				v.push_back(t);
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
